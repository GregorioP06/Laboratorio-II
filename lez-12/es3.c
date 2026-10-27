#include <stdio.h>
#include <stdlib.h>
#define N 501

int lcp(char *s1, char *s2) {
    int i;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++) {
    }
    return i--;
}

int main(void) {
    int num;
    scanf("%d", &num);

    char **strings = malloc(num * sizeof(char *));
    for (int i = 0; i < num; i++) {
        strings[i] = malloc(N * sizeof(char));
        scanf("%s", strings[i]);
    }
    for (int i = 1; i < num; i++) {
        printf("%s - %s: %d\n", strings[i - 1], strings[i],
               lcp(strings[i - 1], strings[i]));
    }

    return EXIT_SUCCESS;
}
