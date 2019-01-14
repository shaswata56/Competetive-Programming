#include <stdio.h>
#include <math.h>

int main()
{
	unsigned long long x;
	long double a[128 * 1024];
	int i = 1;
	while(scanf("%lld", &x) != EOF)
	{
		a[i++] = (long double) sqrt(x * 1.0);
	}
	i--;
	while(i != 0)
	{
		printf("%.4llf\n", a[i]);
		i--;
	}
	return 0;
}
