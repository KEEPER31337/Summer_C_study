#include <stdio.h>

int main() {
    for(int i =0; i<3; i++) {
        int arr[5];
        int a,b,c,d;
        int l = 0;
        for(int j =0; j<4;j++) {
            scanf("%d", &arr[j]);
            if (arr[j] == 1) {
                l++;
            }
        } switch(l){
            case 0:
                printf("D\n");
                break;
            case 1:
                printf("C\n");
                break;
            case 2:
                printf("B\n");
                break;
            case 3:
                printf("A\n");
                break;
            case 4:
                printf("E\n");
                break;
            default: break;

        }

    }
}
