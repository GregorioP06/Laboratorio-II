#include <stdio.h>

#define NUMBER 42

int main() {
    int guess;

    puts("Indovina il numero segreto!");

    do {
        printf("Input: ");
        scanf("%d", &guess);
        if (guess < NUMBER) {
            puts("Il tuo numero è minore.");
        } else if (guess > NUMBER) {
            puts("Il tuo numero è maggiore.");
        }
    } while (guess != NUMBER);

    puts("Hai indovindato il numero!");

    return 0;
}
