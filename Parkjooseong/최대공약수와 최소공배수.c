#include <stdio.h>
int change(int *a, int *b){
    int k;
    k = *a;
    *a = *b;
    *b = k;
}
int min(int a, int b) /*최대공약수 (유클리드 호제법) (a>b)*/{
    while(1){
    while(a>=b){
        a -=b;
    }
    if(a == 0){
        return b;
    }
    else{
        change(&a, &b);
    }
} }
int max(int a, int b){
    int an = a;
    int anp = 1;
    int bn = b;
    int bnp = 1;
    while(1){
        if (an> bn) {
            bnp+=1;
            bn = b* bnp;
        }
        else if (bn>an) {
            anp+=1;
            an = a* anp;
        }
        else if (an == bn) {
            return an;
        }
    }
}
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num2 > num1){
        change(&num1, &num2);
    }
    printf("%d\n", min(num1, num2));
    printf("%d", max(num1, num2));
    return 0;
}
