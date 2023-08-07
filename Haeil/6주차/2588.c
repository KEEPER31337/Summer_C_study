#include <stdio.h>

int main() {
    int number1;
    int number2;
    int number2_1;
    int number2_2;
    int number2_3;    
    printf("");
    scanf("%d", &number1);
    printf("");
    scanf("%d", &number2);
    number2_1 = number2/100;
    number2_2 = (number2/10) % 10;
    number2_3 = (number2%100) %10;
    printf("%d\n", number1 * number2_3);
    printf("%d\n", number1 * number2_2);
    printf("%d\n", number1 * number2_1);
    printf("%d\n", number1 * number2);
    return 0;
}