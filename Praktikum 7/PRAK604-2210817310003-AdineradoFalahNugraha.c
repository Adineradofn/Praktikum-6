#include <stdio.h>
#include <string.h>

int main ()
{
    char kata1[100], kata2[100] ;
    int isi1, isi2, a, bintang = 0, pagar = 0 ;
    scanf (" %[^\n]%*c", &kata1) ;
    scanf (" %[^\n]%*c", &kata2) ;
    isi1 = strlen (kata1) ;
    isi2 = strlen (kata2) ;
    if (isi1 != isi2) {
        printf ("\nPanjang kalimat berbeda, pesan palsu\n") ; }
    else {
        for (a = 0 ; a < isi1 ; a++) {
            if (kata1[a] == kata2[a]) {
                if (kata1[a] == ' ') {
                    printf (" ") ; }
                else {
                    printf ("*") ;
                    bintang++ ; } }
            else {
                printf ("#") ;
                pagar++ ; } }
        printf ("\n\n* = %d", bintang) ;
        printf ("\n# = %d", pagar) ;
        if (bintang >= pagar) {
            printf ("\nPesan Asli\n") ; }
        else {
            printf ("\nPesan Palsu\n") ; } }
}
