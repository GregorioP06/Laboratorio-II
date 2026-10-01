#include <stdio.h>
#define N 2

enum giorni {
    lunedì,
    martedì,
    mercoledì,
    giovedì = 100,
    venerdì,
    sabato,
    domenica
};

typedef struct {
    char nome[10];
    int età;
} Studente;

typedef int pippo;

int main() {
    int a[N][N] = {{1, 2}, {3, 4}};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%p\n", &a[i][j]);
            printf("%d\n", a[i][j]);
        }
    }
    enum giorni g = lunedì;
    printf("\n%d\n", g);
    printf("%d\n", venerdì);

    pippo foo = 42;
    printf("\n%d\n", foo);
}
