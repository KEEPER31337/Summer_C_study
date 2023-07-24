#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main(){
     int num1;
     scanf("%d", &num1);
     for(int i = 0 ; i < num1 ; ++ i){
          int a;
          int b;
          scanf("%d %d", &a, &b);
          printf("%d\n", pow(a, b) - (pow(a, b) / 10)* 10 );
     }
}
    