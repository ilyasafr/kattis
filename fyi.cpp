#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    if (n >= 5550000 && n <= 5559999) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}