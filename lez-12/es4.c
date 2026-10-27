#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

int compare(const void *a, const void *b) {
    const char *s1 = *(const char **)a;
    const char *s2 = *(const char **)b;
    return strcmp(s1, s2);
}

int main(void) {
    char str[N];
    scanf("%s", str);
    int len = (int)strlen(str);
    char **suffixes = malloc(len * sizeof(char *));
    for (int i = 0; i < len; i++) {
        suffixes[i] = malloc((len + 1 - i) * sizeof(char));
        strcpy(suffixes[i], &(str[i]));
    }

    qsort(suffixes, len, sizeof(char *), compare);

    puts("output:");
    for (int i = 0; i < len; i++) {
        printf("%s\n", suffixes[i]);
    }

    return EXIT_SUCCESS;
}
