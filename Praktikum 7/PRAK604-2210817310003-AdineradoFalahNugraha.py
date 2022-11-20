kata1 = input() ; kata2 = input()
isi1 = len(kata1) ; isi2 = len(kata2)
bintang = 0 ; pagar = 0
if isi1 != isi2 :
    print("\nPanjang kalimat berbeda, pesan palsu")
else :
    for a in range(0, isi1) :
        if kata1[a] == kata2[a] :
            if kata1[a] == ' ' :
                print(" ", end='')
            else :
                print("*", end='') ; bintang += 1
        else :
            print("#", end='') ; pagar += 1
    print("\n\n* =", bintang)
    print("# =", pagar)
    if bintang >= pagar :
        print("\nPesan Asli")
    else :
        print("\nPesan Palsu")