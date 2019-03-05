#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        long double in, out;
        scanf("%LF", &in);
        out = 4 * in * in - (in * acos(0.0) * in * 2);
        printf("Case %d: %0.2LF\n", i + 1, out);
    }
    return 0;
}
