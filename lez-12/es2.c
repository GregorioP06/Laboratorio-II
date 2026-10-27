#include <stdio.h>
#include <stdlib.h>
#define N 1000

int anagramma(char *s1, char *s2) {
    int count[256] = {0};

    for (int i = 0; s1[i] != '\0'; i++) {
        count[(unsigned char)s1[i]]++;
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        count[(unsigned char)s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char s1[N];
    char s2[N];
    scanf("%s", s1);
    scanf("%s", s2);
    int result = anagramma(s1, s2);
    printf("%d\n", result);
    return EXIT_SUCCESS;
}
