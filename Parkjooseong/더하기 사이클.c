#include <stdio.h>

int main() {
    int num;
    int k = 0;
    scanf("%d", &num);
    int a = num;
    while(1){
        k+=1;
        int first = a%10;
        int n = first*10+(first+((a-first)/10))%10;
        if (n == num){
            printf("%d", k);
            break;
        }
        else{
            a = n;
        }
    }
    return 0;
}
