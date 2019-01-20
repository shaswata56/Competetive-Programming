#include<stdio.h>
#include<math.h>
 
int main()
{
    int test, i;
    scanf("%d", &test);
    for(i=1;i<=test;i++)
    {
        double ox,oy,ax,ay,bx,by,r,c,A,res;
 
        scanf("%lf %lf %lf %lf %lf %lf", &ox,&oy,&ax,&ay,&bx,&by);
        c= sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        r= sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
 
        A = acos((r*r+r*r-c*c)/(2*r*r));
 
        res = A*r;
 
        printf("Case %d: %.9lf\n",i,res);
 
    }
 
    return 0;
}
