#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("misure.txt", "r");
    int c;

    while ((c = fgetc(fp) != EOF)) {
        printf("%c", c);
    }

    if (ferror(fp)) {
        perror("errore");
    } else if (feof(fp)) {
        printf("eof");
    }

    fclose(fp);
    fp = NULL;

    return EXIT_SUCCESS;
}
