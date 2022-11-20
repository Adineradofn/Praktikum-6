baris, kolom = map(int, input().split())
isi = list(map(int, input().split()))
angka = []
for a in range(0, baris * kolom, kolom) :
    angka.append(isi[a : a + kolom])
print(" ")
for a in range(baris) :
    for b in range(kolom) :
        print(angka[a][b], end=' ')
    print()