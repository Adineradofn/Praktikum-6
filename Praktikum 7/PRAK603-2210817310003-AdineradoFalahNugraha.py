baris1, baris2 = map(int, input().split())
isi1 = list(map(int, input().split()))
isi2 = list(map(int, input().split()))
angka1 = [] ; angka2 = []
if (baris1 != baris2) :
    print("\nJumlah tidak sama")
else :
    for a in range(0, baris1) :
        angka1.append(isi1[a])
    for a in range(0, baris2) :
        angka2.append(isi2[a])
    for a in range(0, baris1) :
        print(angka1[a] * angka2[a], end=' ')