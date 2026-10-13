/*
Uso di malloc(), calloc(), free()
Memory leaks
*/

#include <stdio.h>
#include <stdlib.h>

void foo() {
    int *c_ptr = malloc(sizeof(int));
    if (c_ptr == NULL) {
        return;
    }
    *c_ptr = 10;
    printf("%d\n", *c_ptr);
    // no free(c_ptr) -> memory leak
}

int main(void) {
    int *a_ptr = malloc(sizeof(int));
    if (a_ptr == NULL) {
        return 1;
    }
    *a_ptr = 5;
    printf("%d\n", *a_ptr);

    int *b_ptr = calloc(1, sizeof(int));
    if (b_ptr == NULL) {
        return 1;
    }
    printf("%d\n", *b_ptr);

    free(a_ptr);
    free(b_ptr);

    foo();

    return 0;
}
