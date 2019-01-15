#include <stdio.h>
#include <stdbool.h>

bool check_rotation(int *data, int n)
{
	int i, j, res = 0;
	for(i = 0; i < (1 << n); i++)
	{
		res = 0;
		for(j = 0; j < n; j++)
		{
			if(i & (1 << j))
				res += data[j];
			else	res -= data[j];
		}
		if(res % 360 == 0)
			return true;
	}
	return false;
}

int main()
{
	int t, i, num[1000000], deg = 0;
	scanf("%d", &t);
	for(i = 0; i < t; i++)
		scanf("%d", &num[i]);
	if(check_rotation(num, t))
		printf("YES\n");
	else	printf("NO\n");
	return 0;
}

