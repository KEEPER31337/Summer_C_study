#include <stdio.h>

int main() {
    int num;
    int odd = 0;
    int sum = 0;
    int min = 100;
    for (int i =0; i<7; i++){
        printf("");
        scanf("%d", &num);
        if (num % 2 != 0) {
            sum += num;
            odd += 1;
            if (num < min ) {
                min = num;
            }         
        } 
    }
     if (odd > 0) {
        printf("%d\n%d\n", sum, min);
    }
    if (odd == 0) {
        printf("-1\n");
    }
    return 0;
    
    
}