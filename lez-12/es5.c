// da finire

#include <stdio.h>
#include <stdlib.h>

typedef struct Studente {
    int matricola;
    int età;
    struct Studente *next;
} Studente;

Studente *aggiungiStudente(Studente *head, int matricola, int età) {
    if (matricola <= 0 || età < 0) {
        fprintf(stderr, "Parametri errati.\n");
        return head;
    }

    Studente *new = malloc(sizeof(Studente));
    new->matricola = matricola;
    new->età = età;
    new->next = NULL;

    if (head == NULL) {
        return new;
    }

    Studente *cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = new;
    return head;
}

void printLista(Studente *head) {
    while (head != NULL) {
        printf("%d, %d\n", head->matricola, head->età);
        head = head->next;
    }
}

void freeLista(Studente *head) {
    while (head != NULL) {
        Studente *next = head->next;
        free(head);
        head = next;
    }
}

void test(Studente *head) {
    head = aggiungiStudente(head, 101, 20);
    head = aggiungiStudente(head, 102, 30);
    head = aggiungiStudente(head, 251, 26);

    printLista(head);
    freeLista(head);
}

int main(void) {
    Studente *head = NULL;
    test(head);

    return EXIT_SUCCESS;
}
