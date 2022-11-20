ordo = int(input())
print("Matriks A")
mat1 = [] ; mat2 = []
for a in range(0, ordo) :
    isi1 = list(map(int, input().split()))
    mat1.append(isi1[0 : ordo])
print("\nMatriks B")
for a in range(0, ordo) :
    isi2 = list(map(int, input().split()))
    mat2.append(isi2[0 : ordo])
print("\nMatriks A x B")
for a in range(0, ordo) :
    for b in range(0, ordo) :
        hasil = 0
        for c in range(0, ordo) :
            hasil += mat1[a][c] * mat2[c][b]
        print(hasil, end=' ')
    print()