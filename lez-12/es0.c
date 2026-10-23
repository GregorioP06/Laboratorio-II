#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s1[] = "ciao";
    printf("%s\n", s1);
    s1[3] = 'X';
    printf("%s\n", s1);
    s1[2] = '\0';
    printf("%s\n", s1);

    char *s2 = malloc(6 * sizeof(char));
    strcpy(s2, "mondo");
    printf("%s\n", s2);
    s2[2] = 'X';
    printf("%s\n\n\n", s2);

    char s3[] = "uno, due, tre";
    printf("\nPrima: %d - %s\n", sizeof(s3), s3);

    // strtok, la prima volta lo chiamo sulla stringa e il delimitatore
    char *token = strtok(s3, ",");
    if (token != NULL) {
        printf("%s\n", token);
    }
    // le volte successive per continuare sulla stessa stringa
    // passo NULL e il delimitatore che voglio (anche diverso da quello prima)
    while ((token = strtok(NULL, ",")) != NULL) {
        printf("%s\n", token);
    }
    // strtok ogni volta sostituisce il delimitatore con un '\0'
    printf("Dopo: %d - %s\n", sizeof(s3), s3);

    return EXIT_SUCCESS;
}
