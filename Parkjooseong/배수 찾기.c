#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(1){
        int k;
        scanf("%d", &k);
        if (k ==0) {
            break;
        }
        else{
            if (k%n == 0) {
                printf("%d is a multiple of %d.\n",k,n);
            }
            else{
                printf("%d is NOT a multiple of %d.\n",k,n);
            }
        }
    }
    return 0;
}
