#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {  
        int a, b, result;
        scanf("%d %d", &a, &b);

        a = a % 10;   
        if (a == 0) {
            result = 10;
        }
        else {
            result = (a^((b % 4)+4)) % 10;
        }
        printf("%d\n", result);
    }
    return 0;
} 