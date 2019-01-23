#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string str;
    list <char> ch;
    list<char>::iterator it;
    while(getline(cin,str))
    {
        ch.clear();
        it = ch.begin();
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='[')
                it = ch.begin();
            if(str[i]==']')
                it = ch.end();
            if(str[i]!='[' && str[i]!=']')
                ch.insert(it,str[i]);
        }
        for(it=ch.begin();it!=ch.end();it++)
            printf("%c",*it);
        printf("\n");
    }
    return 0;
}
