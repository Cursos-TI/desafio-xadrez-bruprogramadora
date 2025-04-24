#include <stdio.h>
int main () {
    int i; 
    int j;
    int k;

    printf (" Movimento da torre: \n");
    for ( i =1 ; i <= 5; i++) {
        printf (" Direita \n");
    }
    printf ("\n Movimento do bispo :\n");
     j =1;
    while ( j <= 5){
        printf (" Cima direita\n");
        j++;
    }
printf (" \n Movimento da rainha:\n");
k=1;

do {
    printf ("Esquerda\n");
    k++;
} while (k <= 8);


    return 0;
}
