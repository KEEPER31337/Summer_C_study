#include <stdio.h>

int main() {
    int a, b;

    scanf_s("%d \n%d", &a, &b);

    while (a < -999 || a>999 || b < -999 || b>999) {
        scanf_s("%d\n%d", &a, &b);
    }

    printf("%d\n%d\n%d\n", a + b, a - b, a * b);


    return 0;
}