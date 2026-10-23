#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

char *my_strcat1(char *s1, char *s2) {
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    char *res = malloc((l1 + l2 + 1) * sizeof(char));
    strcpy(res, s1);
    strcpy(res + l1, s2);
    // strcpy copia anche \0 quindi non serve farlo a mano
    // res[l1 + l2] = '\0';
    return res;
}

int main(void) {
    char s1[N];
    char s2[N];
    scanf("%s", s1);
    scanf("%s", s2);

    char *concat = my_strcat1(s1, s2);
    printf("%s\n%d\n", concat, strlen(concat));

    free(concat);
    return EXIT_SUCCESS;
}
