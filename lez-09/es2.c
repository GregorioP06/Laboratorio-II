/*
Matrici dinamiche su heap
*/

#include <stdio.h>
#include <stdlib.h>
#define N 2

int main(void) {
    // array (su heap) di puntatori a puntatori a int
    int **a = malloc(N * sizeof(int *));

    // ogni puntatore dell'array ora punta ad un'array (su heap) di int
    for (int i = 0; i < N; i++) {
        a[i] = malloc(N * sizeof(int));
    }

    // stampo i contenuti di tutti gli int
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\n", a[i][j]);
        }
        free(a[i]);
    }
    free(a);

    return 0;
}
