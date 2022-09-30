#include <stdio.h>

int main() {
    char word[16];
    scanf("%s", word);
    getchar();

    for (int i = 1; i <= 3; i++) {
        if (i == 3) {
            printf("%s", word);
            continue;
        }

        printf("%s ", word);
    }
    return 0;
}