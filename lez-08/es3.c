#include <stdio.h>

int main() {
    int a = 42;  /* variabile di tipo int */
    int *b = &a; /* punto ad a */

    printf("Valore di a:\t%d\nIndirizzo di a:\t%p\nValore di b:\t%p\n\n", a, (void *)&a,
           (void *)b);

    *b = 10; /* cambio il valore di a attraverso il puntatore b */

    printf("Valore di a:\t%d\nIndirizzo di a:\t%p\nValore di b:\t%p\n\n", a, (void *)&a,
           (void *)b);
}
