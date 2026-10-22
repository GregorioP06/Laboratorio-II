#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int sum_submatrix(int **matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main(void) {
    int M, N;
    puts("Inserisci M <spazio> N:");
    scanf("%d %d", &M, &N);
    if (M < N || N < 0)
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

    int result = sum_submatrix(A, N);
    printf("Risultato: %d\n", result);

    for (int i = 0; i < M; i++) {
        free(A[i]);
    }
    free(A);

    return EXIT_SUCCESS;
}
