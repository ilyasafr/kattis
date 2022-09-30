#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    getchar();
    if (a > b) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}