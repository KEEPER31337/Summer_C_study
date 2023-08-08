#include <stdio.h>
int rev(int a) {
    int sum = 0;
    while(a) {
        sum = sum*10 +(a%10);
        a/=10;
    } return sum;
}
int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d", rev(rev(x)+rev(y)));
    return 0;
}
