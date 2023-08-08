#include <stdio.h>

int main() {
    int input, n;
    int k = 0;
    scanf("%d", &input);
    scanf("%d", &n);
    input= input - (input%100);
    while(1){
        if((input+k)%n == 0){
            break;
        }
        else{
            k++;
        }
    }
    if (k<10){
        printf("0%d",k);
    }
    else{printf("%d", k);}
    return 0;
}
