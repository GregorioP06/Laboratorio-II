#include <stdio.h>

void set_first_to_42(int *a) {
    a[0] = 42;
    /* oppure anche */
    *a = 42;
}

/* *a e a[] come parametro sono la stessa cosa */
void set_first_to_42_v2(int a[]) {
    a[0] = 42;
    /* oppure anche */
    *a = 42;
}

int main() {
    int a[10]; /* a è un puntatore
                che punta al primo dei 10 interi contigui */

    for (int i = 0; i < 10; i++) {
        a[i] = i;
    }

    /* un array di lunghezza 1 è uguale ad un puntatore (?) */
    int b[1];
    b[0] = 3;
    printf("%d\n", *b);

    printf("%d %d\n", a[1], *(a + 1));

    set_first_to_42(a);
    printf("%d\n", a[0]);
}
