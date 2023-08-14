#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    for(int i=0;i<num;i++) {
        int west, east;
        int k =1;
        scanf("%d %d", &west, &east);
        for(int j=1;j<=west;j++) {
            k*=east;
            k/=j;
            east-=1;
        }
        printf("%d\n", k);

    }

}
