#include <stdio.h>

#define N 10

int main() {
    int a[N][N], b[N][N];
    int res = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = i + j;
            b[i][j] = i * j;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res += a[i][j] * b[i][j];
        }
    }

    printf("Risultato: %d\n", res);
}
