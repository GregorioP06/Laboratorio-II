#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
} st;

int f(int x, int y) { return x + y * 2; }

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main(void) {
    // accesso con ->
    // st->a uguale a *st.a
    st *foo = malloc(sizeof(st));
    foo->a = 10;
    foo->b = 20;
    printf("%d\n", foo->a);

    // puntatore a funzione
    int (*g)(int, int);
    g = f;
    printf("%d\n", g(1, 2));

    // qsort
    int arr[5] = {3, 1, 2, 5, 4};
    qsort(arr, 5, sizeof(int), compare);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}
