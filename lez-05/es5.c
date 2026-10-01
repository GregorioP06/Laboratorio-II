#include <stdio.h>

int main() {
    int v[10], w[10];

    /* Riempi i vettori */
    for (int i = 0; i < 10; i++) {
        v[i] = i;
        w[i] = i;
    }

    /* Prodotto scalare */
    int res = 0;
    for (int i = 0; i < 10; i++) {
        res += v[i] * w[i];
    }

    printf("Risultato: %d\n", res);

    return 0;
}
