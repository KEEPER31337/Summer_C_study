#include <stdio.h>

int main() {
	while(1) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        a *= a; 
        b *= b;
        c *= c;

        if(a == 0 && b == 0 && c == 0) {
            break;
        }
        else if(((a + b) == c) || ((a + c) == b) || ((c + b) == a)) { //문제에서 c가 제일 큰 변이라는 보장이 없음
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }

    }
    return 0;
}
