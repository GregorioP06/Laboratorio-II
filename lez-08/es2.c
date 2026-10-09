#include <stdio.h>

int main() {
    int a = 42;             /* variabile di tipo int */
    float *b = (float *)&a; /* punto ad a, però interpreto il valore di a come float */

    *b = 1.844698f; /* assegno ad a un float */

    printf("%d %f %f\n", a, a, *b); /*
        a interpretato come intero è "spazzatura",
        a interpretato come float è il corretto valore float che gli ho assegnato
    */
}
