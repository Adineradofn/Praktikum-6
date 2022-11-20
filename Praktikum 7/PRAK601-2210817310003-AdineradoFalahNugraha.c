#include <stdio.h>

int main ()
{
    int bariss, k, a, b, isi ;
    scanf("%d %d", &bariss, &k) ;
    int angka[bariss][k] ;
    for (a = 0; a < bariss; a++) {
        for (b = 0; b < k; b++) {
            scanf ("%d", &isi) ;
            angka[a][b] = isi ;
        }
    }
    printf ("\n") ;
    for (a = 0; a < bariss; a++) {
        for (b = 0; b < k; b++) {
            printf ("%d ", angka[a][b]) ;
        }
        printf ("\n") ;
    }
}
