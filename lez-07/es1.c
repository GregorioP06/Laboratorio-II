#include "test.h"
#include <stdio.h>

// int max(int, int); /* -> dichiarazione */
int max(int a, int b) { return a > b ? a : b; } /* -> definizione */
void hello() { puts("Hello world!"); }

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Res: %d\n", max(a, b));
    hello();
    ciao();
    return 0;
}
