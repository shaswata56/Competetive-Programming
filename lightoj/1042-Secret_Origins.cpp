#include <bits/stdc++.h>
using namespace std;

long long nextOronoy(long long n)
{
    long long count = 0, rightOne, nextHighBit, rightOnePattern;
    if (n)
    {
        rightOne = n & -n;
        nextHighBit = n + rightOne;
        rightOnePattern = n ^ nextHighBit;
        rightOnePattern = rightOnePattern/rightOne;
        rightOnePattern >>= 2;
        count = nextHighBit | rightOnePattern;
    }
    return count;
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        long long in;
        scanf("%llu", &in);
        printf("Case %d: %llu\n", i + 1, nextOronoy(in));
    }
    return 0;
}
