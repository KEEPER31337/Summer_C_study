#include <stdio.h>

char i_letter(char *S, int i) {  
    return S[i-1];
}

int main() {
    char S[1000];
    scanf("%s", S); 
    int i;
    scanf("%d", &i);
    printf("%c", i_letter(S, i));
    return 0;
}