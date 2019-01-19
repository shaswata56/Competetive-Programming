#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, a, b, c, k, distance, temp;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &distance);
		scanf("%d %d %d", &a, &b, &c);
		if(b < c)
			swap(b, c);
		if(a < b)
			swap(a, b);
		if(a + b + c >= distance)
		{
			if(a + b + c == distance)
				printf("WIN\n");
			else {
				if(a - b - c == distance)
					printf("WIN\n");
				else if(a - b + c == distance)
					printf("WIN\n");
				else if(a + b - c == distance)
					printf("WIN\n");
				else if(b + c - a == distance)
					printf("WIN\n");
				else if(b - c - a == distance)
					printf("WIN\n");
				else if(c - a - b == distance)
					printf("WIN\n");
				else	printf("LOSE\n");
			}
		}
		else	printf("LOSE\n");
	}
	return 0;
}
