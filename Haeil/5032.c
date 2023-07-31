#include <stdio.h>
int main() {
    int e;
    int f;
    int c;
    int has_empty;
    int remain_empty; 
    int answer = 0 ;
    printf("");
    scanf("%d %d %d", &e, &f, &c);
    has_empty = e+f;
    while (has_empty >= c ) {
        remain_empty = has_empty % c;
        has_empty /= c;
        answer += has_empty;
        has_empty = has_empty + remain_empty;


    }
    printf("%d\n", answer);
    return 0;

    
        
}



