#include <stdio.h>

int main() {
    int n_pari = 0, n_dispari = 0, n;
    float num;

    printf("Quanti valori: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Valore: ");
        scanf("%f", &num);
        if ((int)num % 2 == 0) {
            n_pari++;
        } else {
            n_dispari++;
        }
    }

    printf("%d pari, %d dispari\n", n_pari, n_dispari);
    return 0;
}
