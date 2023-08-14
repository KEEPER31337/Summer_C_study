#include <stdio.h>
void compare(int a, int b, int *chang_score, int *sang_score) {
    if (a > b) {
        *sang_score -= a;
    }
    if (a < b) {
        *chang_score -= b;
    }
    
}

int main() {
    int chang_score = 100;
    int sang_score = 100;
    int num;
    int chang_dice;
    int sang_dice;
    printf("");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        printf("");
        scanf("%d %d", &chang_dice, &sang_dice);
        compare(chang_dice,sang_dice, &chang_score, &sang_score);
        
    }
    printf("%d %d", chang_score, sang_score);
    return 0;

}