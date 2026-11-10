#include <stdio.h>

// int sumodds(int *V, int n) {
//     int res = 0;
//     for (int i = 0; i < n; i++) {
//         if (V[i] & 0x1) {
//             res += V[i];
//         }
//     }
//     return res;
// }

extern int sumodds(int *V, int n);

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int res = sumodds(a, 5);
    printf("%d\n", res);
}
