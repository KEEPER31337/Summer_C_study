#include<stdio.h>
 
int main(){
    int q, a;
    scanf("%d", &q);
    while(q--){
        scanf("%d", &a);
        if ((a&(-a))==a)printf("1\n");
        else printf("0\n");
    }
}