#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) { int temp = a; a = b; b = temp; }
    if (a > c) { int temp = a; a = c; c = temp; }
    if (b > c) { int temp = b; b = c; c = temp; }
    if(b-a == c-b){
        printf("%d", c+(c-b));
    }
    else if(b-a > c-b){
        printf("%d", a+(c-b));
    }
    else{
        printf("%d", b+(b-a));
    }
}