#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    for(int i=0;i<T;i++) {
        char S[1000];
        scanf("%s", S);

        int j=0;
        while(S[j] != '\0') {
            j++;
        }
        printf("%c %c\n", S[0], S[j-1]);
    }
    return 0;
}
