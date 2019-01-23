#include <stdio.h>

int main(void) {
  int t=1,i,treat,a,cas=1;
  while(t>0){
  scanf("%d",&t);
  treat=0;
  for(i=0;i<t;i++)
  {
    scanf("%d",&a);
    if(a==0)
    {
      --treat;
    }
    else ++treat;
  }
  if(t!=0) printf("Case %d: %d\n",cas,treat); cas++;
  }
  return 0;
}