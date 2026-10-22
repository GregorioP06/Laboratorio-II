#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricola;
    int età;
} Studente;

int compare(const void *a, const void *b) {
    return (*((Studente **)a))->matricola - (*((Studente **)b))->matricola;
}

int main(void) {
    // allocazioni dinamiche e input dati
    int N;
    printf("Quanti studenti? ");
    scanf("%d", &N);

    Studente **students = malloc(N * sizeof(Studente *));
    if (students == NULL)
        return EXIT_FAILURE;

    for (int i = 0; i < N; i++) {
        students[i] = malloc(sizeof(Studente));
        if (students[i] == NULL) {
            while (i > 0) {
                free(students[--i]);
            }
            free(students);
            return EXIT_FAILURE;
        }
        printf("Matricola <spazio> età: ");
        scanf("%d %d", &students[i]->matricola, &students[i]->età);
    }

    // ordina per matricola
    qsort(students, N, sizeof(Studente *), compare);

    // stampa dati
    puts("Ordinati per matricola:");
    for (int i = 0; i < N; i++) {
        printf("%d %d\n", students[i]->matricola, students[i]->età);
    }

    // free
    for (int i = 0; i < N; i++)
        free(students[i]);

    free(students);

    return EXIT_SUCCESS;
}
