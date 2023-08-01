#include <stdio.h>

int main() {
    int num;
    int count = 0;
    int arr[100];
    scanf("%d", &num);
    for(int i = 0; i<num;i++) {
        scanf("%d", &arr[i]);
        for (int j = 2; j<arr[i];j++) {
            if(arr[i] % j == 0) {
                break;
            }
            if(j == arr[i]-1) {
                count++;
            }
        } if (arr[i] == 2) {
            count++;
        }
    } printf("%d", count);
    return 0;
}
