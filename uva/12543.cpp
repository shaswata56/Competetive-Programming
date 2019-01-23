#include<string.h>
#include <ctype.h>
#include<stdio.h>
int main()
{
    int End=0;
	char s[10010], wrd[10010], word[10010];
	long l, c = 0, max = -1,len,i;
	while(!End)
    {
        scanf("%s", &s);
        l = strlen(s);
        for(i = 0 ; i <= l ; i++)
        {
            if(isalpha(s[i]) || s[i] == '-')
            {
                wrd[c]=s[i];
                if(s[i]=='D')
                {
                    if(s[i-1]=='-')
                    {
                        if(s[i-2]=='N')
                        {
                            if(s[i-3]=='-')
                            {
                                if(s[i-4]=='E')
                                {
                                    End=1;
                                }
                            }
                        }
                    }
                }
                c++;
            }
            else{
                if(c > max)
                {
                    max=c;
                    while(c>=0)
                    {
                        word[c]=wrd[c];
                        c--;
                    }
                }
                c = 0;
            }
        }
    }
	long x=0;
	while(x<max)
    {
        printf("%c",tolower(word[x]));
        x++;
    }
    printf("\n");
	return 0;
}
