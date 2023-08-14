#include <stdio.h>

int main() {
    int l;
    int m;
    int n;
    while(1) {
        printf("");
        scanf("%d %d %d", &l, &m, &n);
        if (l == 0 && m == 0 && n == 0) {
            break;
        }
        if (l*l + m*m == n*n || l*l + n*n == m*m || m*m + n*n == l*l) {
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }
    }
    return 0;
    
}