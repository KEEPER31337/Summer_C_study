#include <stdio.h>

int main() {
    int bird;
    int num = 1;
    int answer = 0;
    printf("");
    scanf("%d", &bird);
    while(bird > 0) {
        bird -= num;
        num += 1;
        answer += 1;
        if (num > bird) {
            num = 1;
        }
    }
    printf("%d\n", answer);
    return 0;


}