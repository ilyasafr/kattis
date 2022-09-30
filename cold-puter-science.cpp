#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    int t[n];
    int minus = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
        getchar();

        if (t[i] < 0) {
            minus++;
        }
    }

    printf("%d", minus);
    return 0;
}