#include <stdio.h>

void add_one(int *n) { *n += 1; }

int *f(int n) { return &n; }

int main() {
    int a = 42;
    printf("%d\n", a);

    add_one(&a);
    printf("%d\n", a);

    printf("%p\n", (void *)f(a)); /* nil perché n è andato fuori scope */
}
