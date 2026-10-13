/*
Memoria allocata su heap non va fuori scope
*/

#include <stdio.h>
#include <stdlib.h>

int *foo(void) {
    int *b = malloc(sizeof(int));
    *b = 42;
    return b;
}

int main(void) {
    int *a = foo();
    printf("%d\n", *a);

    return 0;
}
