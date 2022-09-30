#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 1; i <= n; i++) {
        char word[101];
        scanf("%s", word);

        if (i % 2 != 0) {
            printf("%s\n", word);
        }
    }
    return 0;
}