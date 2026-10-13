// memoria di malloc è spesso azzerata(?) (non in lezione)

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void) {
    for (int i = 0; i < N; i++) {
        int *a = malloc(sizeof(int));
        if (a == NULL) {
            puts("error");
            return 1;
        }
        printf("i=%d, val=%d\n", i, *a);
        *a = 5;
        free(a);
    }

    return 0;
}
