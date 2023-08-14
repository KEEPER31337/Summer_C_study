#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i = 0; i<a; i++) {
        int m, n, k =1;
        scanf("%d %d", &m, &n);
        for(int j = 0; j<n;j++) {
            k*=m;
            k%=10;
        }if (k%10 == 0) {
            printf("10");
        }
        else{
            printf("%d\n", k%10);}



    }
}
