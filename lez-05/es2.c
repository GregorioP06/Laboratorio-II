#include <stdio.h>
#define LEN 20

struct Studente {
    char nome[LEN];
    int età;
};

int main() {
    struct Studente s = {"Mario", 20};

    printf("Nome: %s, età: %d\n", s.nome, s.età);
    printf("Dimensione in byte: %ld\n", sizeof(s));

    return 0;
}
