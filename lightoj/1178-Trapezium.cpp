#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct trap{
    double a;
    double b;
    double c;
    double d;
};
 
double trapeza(double a, double b, double c, double d)
{
    double s,area;
    s=(b+d+a-c)/2;
    area=(1+(2*c)/(a-c))*sqrt(s*(s-b)*(s-d)*(s-a+c));
    return area;
}
 
int main()
{
    int t,i=1;
    double ara;
    struct trap inp;
    cin>>t;
    while(i<=t)
    {
        cin>>inp.a>>inp.b>>inp.c>>inp.d;
        ara=trapeza(inp.a , inp.b , inp.c , inp.d);
        printf("Case %d: %0.7lf\n",i,abs(ara));
    i++;
    }
return 0;
}
