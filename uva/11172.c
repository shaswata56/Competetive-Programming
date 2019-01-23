#include <stdio.h>

int main(void) {
  int a,b,c,i;
  scanf("%d",&c);
  for(i=1;i<=c;i++)
  {
    scanf("%d %d",&a,&b);
    if(a==b) printf("=\n");
    if(a>b) printf(">\n");
    if(a<b) printf("<\n");
  }
  
  return 0;
}