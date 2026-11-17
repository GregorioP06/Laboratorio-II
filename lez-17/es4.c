// rotto

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("misure.txt", "w");
    int numeri[3] = {10, 20, 42};

    size_t n = fwrite(numeri, sizeof(numeri[0]), 3, fp);

    if (n != 3) {
        perror("errore");
        return EXIT_FAILURE;
    }
    fclose(fp);
    fp = NULL;

    return EXIT_SUCCESS;
}
