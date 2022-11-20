#include <stdio.h>

int main (void)
{
    int ordo, a, b, c, isi, hasil;
    scanf ("%d", &ordo) ;
    int mat1[ordo][ordo], mat2[ordo][ordo] ;
    printf ("\nMatriks A\n") ;
    for (a = 0 ; a < ordo ; a++) {
        for (b = 0 ; b < ordo ; b++) {
            scanf ("%d", &isi) ;
            mat1[a][b] = isi ; } }
    printf ("\nMatriks B\n") ;
    for (a = 0 ; a < ordo ; a++) {
        for (b = 0 ; b < ordo ; b++) {
            scanf ("%d", &isi) ;
            mat2[a][b] = isi ; } }
    printf ("\nMatriks A x B\n") ;
    for (a = 0 ; a < ordo ; a++) {
        for (b = 0 ; b < ordo ; b++) {
            for (c = 0, hasil = 0 ; c < ordo ; c++) {
                hasil += mat1[a][c] * mat2[c][b] ; }
            printf ("%d ", hasil) ; }
        printf ("\n") ; }
}
