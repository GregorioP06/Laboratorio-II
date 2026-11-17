#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("misure.txt", "r");
    char riga[128];

    // legge max sizeof(riga) - 1 caratteri + aggiunge \0
    // si ferma sugli \n
    while (fgets(riga, sizeof(riga), fp) != NULL) {
        fputs(riga, stdout);
        printf("---");
    }
    printf("\n");

    int x;
    double y;
    puts("reset:");
    rewind(fp);
    int n = fscanf(fp, "%d %lf", &x, &y);
    if (n != 2) {
        perror("Errore, non 2 conversioni con successo");
        return EXIT_FAILURE;
    }
    printf("%d %lf\n", x, y);
    fclose(fp);
    fp = NULL;

    return EXIT_FAILURE;
}
