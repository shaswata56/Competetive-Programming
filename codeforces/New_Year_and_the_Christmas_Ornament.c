#include <stdio.h>

int main()
{
	int y, b, r;
	scanf("%d%d%d", &y, &b, &r);
	if(y < b && y < r)
		if(r == y + 1)
			printf("%d\n", 3 * (r - 1));
		else	printf("%d\n", 3 * (y + 1));
	else if(b < r && b < y)
		printf("%d\n", 3 * b);
	else if (y == b && y < r)
		printf("%d\n", 3 * y);
	else	printf("%d\n", 3 * (r - 1));
	return 0;
}
