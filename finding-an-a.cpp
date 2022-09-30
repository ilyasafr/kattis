#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);
    getchar();

    int show = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (show == 0 && s[i] == 'a') {
            show = 1;
        }

        if (show == 1) {
            printf("%c", s[i]);
            continue;
        }

    }

    return 0;
}