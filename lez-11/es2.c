#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void cambia_segno_diagonale(int **A, int M) {
    for (int i = 0; i < M; i++) {
        A[i][i] = -A[i][i];
    }
}

int main(void) {
    int M;
    puts("Inserisci M:");
    scanf("%d", &M);
    if (M <= 0)
        return EXIT_FAILURE;

    int **A = malloc(M * sizeof(int *));
    if (A == NULL)
        return EXIT_FAILURE;
    for (int i = 0; i < M; i++) {
        A[i] = malloc(M * sizeof(int));
        if (A[i] == NULL) {
            while (i > 0) {
                free(A[--i]);
            }
            free(A);
            return EXIT_FAILURE;
        }
        for (int j = 0; j < M; j++) {
            printf("Inserisci elemento: ");
            scanf("%d", &A[i][j]);
        }
    }

    cambia_segno_diagonale(A, M);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i++) {
        free(A[i]);
    }
    free(A);

    return EXIT_SUCCESS;
}
