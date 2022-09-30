#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);
    getchar();

    for (int i = 0; i < p; i++) {
        int k, n;
        scanf("%d %d", &k, &n);
        getchar();
        int total = 0;
        int totalSum = 0;

        for (int y = 0; y < n; y++) {
            total += 1;
            totalSum += total;
        }

        printf("%d %d\n", k, (totalSum+(1*n)));
    }

    return 0;
}