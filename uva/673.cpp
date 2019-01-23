#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tam;
    char s[128];
    bool flag;
    stack <char> str ;
    scanf("%d", &n);
    while(getchar() != '\n');
    while(n--)
    {
        flag = false;
        gets(s);
        tam = strlen(s);
        if(tam > 0){
            for(int i = 0; i < tam; i++){
                if(s[i] == '(' || s[i] == '['){
                    str.push(s[i]);
                }
                else if(s[i] == ')'){
                    if(!str.empty() && str.top() == '(')
                        str.pop();
                    else if(str.empty()){
                        printf("No\n");
                        flag = true;
                        break;
                    }
                }
                else if(s[i] == ']'){
                    if(!str.empty() && str.top() == '[')
                        str.pop();
                    else if(str.empty()){
                        printf("No\n");
                        flag = true;
                        break;
                    }
                }
            }
            if(!str.empty() && !flag)
                printf("No\n");
            else if(str.empty() && !flag)
                printf("Yes\n");
        }
        else
            printf("Yes\n");
        while(!str.empty())
            str.pop();
    }
    return 0;
}
