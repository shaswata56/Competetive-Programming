#include <stdio.h>

int main()
{
	int t, a, i;
	scanf("%d", &t);
	for(i = 0; i < t; i++)
	{
		scanf("%d", &a);
		if(a >= 10)
		{
			printf("%d %d\n", a-10, 10);
		}
		else{
			printf("%d %d\n", 0, a);
		}
	}
	return 0;
}
