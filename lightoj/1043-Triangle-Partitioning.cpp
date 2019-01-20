#include <math.h>
 
int main() {
  int i,t;
  double ab,ac,bc,ratio,a_ade,a_abc,s,ad;
  scanf("%d",&t);
  for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&ratio);
        s=(ab+ac+bc)/2;
        a_abc=sqrt(s*(s-ab)*(s-ac)*(s-bc));
        a_ade=(a_abc/(ratio+1))*ratio;
        ad=sqrt((ab*ab)*(a_ade/a_abc));
        printf("Case %d: %.9lf\n",i,ad);
    }
  return 0;
}
