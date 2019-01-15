#include <stdio.h>

int main()
{
	int seq;
	scanf("%d", &seq);
	if(seq % 2 == 0)
		if(seq % 4 == 0)
			printf("%d\n", 0);
		else	printf("%d\n", 1);
	else
		if((seq - 1) % 4 == 0)
			printf("%d\n", 1);
		else	printf("%d\n", 0);
	return 0;
}
