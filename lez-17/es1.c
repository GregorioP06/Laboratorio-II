#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // apertura
    FILE *fp = fopen("misure.txt", "w");
    if (fp == NULL) {
        perror("Errore");
        return EXIT_FAILURE;
    }

    // scrittura con fprintf
    int result = fprintf(fp, "%d, %.2f\n", 42, 2.46983);
    if (result < 0) {
        perror("Errore");
        return EXIT_FAILURE;
    }

    // scrittura con fputs
    result = fputs("ciao\n", fp);
    if (result == EOF) {
        perror("Errore");
        return EXIT_FAILURE;
    }

    // chiusura con fclose
    if (fclose(fp) == EOF) {
        perror("fclose errore");
        return EXIT_FAILURE;
    }
    fp = NULL;

    return EXIT_SUCCESS;
}
