#include <stdio.h>
#include <ctype.h>
char qwerty_map[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

int main()
{
    char ch; int i=0;
    while (scanf("%c",&ch) != EOF){
        ch = tolower(ch);
        if(isspace(ch))
        {
            printf("%c",ch);
        }
        else{
            for(i=0;qwerty_map[i];i++)
            {
                if(ch==qwerty_map[i])
                {
                    printf("%c",qwerty_map[i-2]);
                    break;
                }
            }
        }
    }
    return 0;
}
