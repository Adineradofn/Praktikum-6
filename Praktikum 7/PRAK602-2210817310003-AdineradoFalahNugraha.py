kolom = int(input())
isi = list(map(int, input().split()))
angka = []
for a in range(0, kolom) :
    angka.append(isi[a])
for a in range(0, kolom) :
    print(angka[a] * (a + 1), end=' ')