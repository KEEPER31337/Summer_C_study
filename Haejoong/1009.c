#include <stdio.h>
int main() {
  int n,a,b,c,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    c=1;
    for(j=0;j<b;j++) c=c*a%10;
    printf("%d\n",c==0? 10:c);
  }
}