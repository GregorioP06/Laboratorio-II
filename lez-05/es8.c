#include <stdio.h>

#define N 2

typedef enum { DIRIGENTE, QUADRO, OPERAIO, IMPIEGATO } Ruolo;

typedef struct {
    int codice;
    int età;
    float stipendio;
    Ruolo ruolo;
} Dipendente;

int main() {

    puts("Inserisci dipendenti:");

    Dipendente dipendenti[N];
    float somma = 0;

    for (int i = 0; i < N; i++) {
        Dipendente d;
        scanf("%d %d %f %d", &d.codice, &d.età, &d.stipendio, &d.ruolo);
        dipendenti[i] = d;
        somma += dipendenti[i].stipendio;
    }

    float media = somma / N;

    puts("Sotto la media:");

    for (int i = 0; i < N; i++) {
        if (dipendenti[i].stipendio < media) {
            printf("%d %d ", dipendenti[i].codice, dipendenti[i].età);
            switch (dipendenti[i].ruolo) {
            case DIRIGENTE:
                puts("dirigente");
                break;
            case QUADRO:
                puts("quadro");
                break;
            case OPERAIO:
                puts("operaio");
                break;
            case IMPIEGATO:
                puts("impiegato");
                break;
            }
        }
    }

    return 0;
}
