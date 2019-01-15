#include <stdio.h>

long f[10005];

long fn( long n ) {
    long i;
    for(i = 6; i <= n; i++)
    {
	    f[i] = (f[i-1] + f[i-2] + f[i-3] + f[i-4] + f[i-5] + f[i-6]) % 10000007;
    }
    return f[n];
}

int main() {
    long n, caseno = 0, cases;
    scanf("%ld", &cases);
    while( cases-- ) {
        scanf("%ld %ld %ld %ld %ld %ld %ld", &f[0], &f[1], &f[2], &f[3], &f[4], &f[5], &n);
        printf("Case %ld: %ld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
