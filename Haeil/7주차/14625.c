#include <stdio.h>

int main() {
    int start_hour;
    int start_min;
    int end_hour;
    int end_min;
    int num;
    int answer = 0;
    printf("");
    scanf("%d %d", &start_hour, &start_min);
    printf("");
    scanf("%d %d", &end_hour, &end_min);
    printf("");
    scanf("%d", &num);
    for (int i = start_hour; i <= end_hour; i++) {
        for (int j = 0; j < 60; j++) {
            if ((i == start_hour && j < start_min )||(i == end_hour && j > end_min)) {
                continue;
            }
            if (i/10 == num || i%10 == num || j/10 == num || j%10 == num) {
                answer += 1;
            }
        }
    }
    printf("%d", answer);
    return 0;
    
    
}