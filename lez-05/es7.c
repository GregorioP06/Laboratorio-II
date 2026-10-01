#include <stdio.h>

#define LEN 10

int main() {
    int a[LEN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* Inverti l'array */
    int temp;
    for (int i = 0; i < LEN / 2; i++) {
        temp = a[LEN - 1 - i];
        a[LEN - 1 - i] = a[i];
        a[i] = temp;
    }

    /* Stampa l'array */
    for (int i = 0; i < LEN; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
