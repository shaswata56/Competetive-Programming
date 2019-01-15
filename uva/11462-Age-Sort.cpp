#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, t=1, arr[2000001];
	while(t != 0)
	{
		scanf("%d", &t);
		if(t)
		{
			for(i = 0; i < t; i++)
				scanf("%d", &arr[i]);
			sort(arr, arr + t);
			for(i = 0; i < t; i++)
				if (i == 0)
					printf("%d", arr[i]);
				else	printf(" %d", arr[i]);
			printf("\n");
		}
	}
	return 0;
}
