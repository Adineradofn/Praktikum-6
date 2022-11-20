#include <stdio.h>

int main ()
{
    int baris1, baris2, a, isi ;
    scanf("%d %d", &baris1, &baris2) ;
    int angka1[baris1], angka2[baris2] ;
    if (baris1 != baris2) {
        printf ("\nJumlah tidak sama") ;
    }
    else {
        for (a = 0; a < baris1; a++) {
            scanf ("%d", &isi) ;
            angka1[a] = isi ;
        }
        for (a = 0; a < baris2; a++) {
            scanf ("%d", &isi) ;
            angka2[a] = isi ;
        }
        printf ("\n") ;
        for (a = 0; a < baris1; a++) {
            printf ("%d ", angka1[a] * angka2[a]) ;
        }
    }
}
