#include <stdio.h>
#include <stdbool.h>
char table[2], hand[15];

bool game(void)
{
	int i;
	for(i = 0; i < 15; i = i + 3)
	{
		if(table[0] == hand[i+1])
			return true;
	}
	for(i = 1; i < 15; i = i + 3)
	{
		if(table[1] == hand[i+1])
			return true;
	}
	return false;
}

int main()
{
	int i=0;
	scanf("%c%c", &table[0], &table[1]);
	while(i < 15)
	{
		scanf("%c", &hand[i]);
		i++;
	}
	bool result = game();
	if(result == true)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}
