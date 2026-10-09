#include <stdio.h>

int main() {
    int a = 42; /* variabile di tipo int */

    int *b = &a;  /* punto ad a */
    int **c = &b; /* punto a b (che punta ad a) */
    int *d = b;   /* punto al valore di b, che è l'indirizzo di a, quindi d punta ad a*/

    printf("%d %d %d\n", *b, **c, *d);
}
