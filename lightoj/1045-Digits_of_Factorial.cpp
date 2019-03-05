#include <bits/stdc++.h>
using namespace std;

long double logarithm(long double n, long long base)
{
    return log(n) / log(base);
}

long long factorialDigitExtended(long long n, long long base )
{
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;
    long double x = ((n * logarithm( n / M_E, base) + logarithm(2 * M_PI * n, base) / 2.0));
    return (long long) floor(x) + 1;
}

int main()
{
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++)
    {
        long long n, base, j;
        scanf("%lld %lld", &n, &base);
        j = factorialDigitExtended(n,base);
        if(j < 0)
        {
            printf("Case %d: inf\n", i + 1);
        }
        else
        {
            printf("Case %d: %lld\n", i + 1, j);
        }
    }
    return 0;
}
