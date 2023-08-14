#include <stdio.h>

int main() {
    int num1;
    int num2;
    int answer;
    printf("");
    scanf("%d", &num1, &num2);
    num1 = ((num1%10) * 100 ) + (((num1 % 100)/10) * 10) +  num1 / 100;
    num2 = ((num2%10) * 100 ) + (((num2 % 100)/10) * 10) +  num2 / 100;
    if (num1 > num2) {
        answer = num1;
    }
    else if (num1 < num2) {
        answer = num2;
    }
    printf("%d", answer);
    return 0;
}