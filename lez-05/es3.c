#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("Quoziente intero: %d\nQuoziente reale: %.2lf\n", a / b, (double)a / b);

    return 0;
}
