#define NDEBUG // se in cima disabilita rimuove gli assert a tempo di compilazione
#include <assert.h>
#include <stdio.h>

int main(void) {
    int current, pos_count = 0, neg_count = 0, pos_tot = 0;
    do {
        puts("Inserisci un numero:");
        scanf("%d", &current);
        if (current > 0) {
            pos_count++;
            pos_tot += current;
            fprintf(stderr, "stderr debug test: %d\n", current);
        } else if (current < 0) {
            neg_count++;
        }
    } while (current != 0);
    assert(pos_count == 0);
    printf("# tutti: %d\n", pos_count + neg_count);
    printf("# positivi: %d\n", pos_count);
    printf("tot positivi: %d\n", pos_tot);
    printf("# negativi: %d\n", neg_count);
    return 0;
}
