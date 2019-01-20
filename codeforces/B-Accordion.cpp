#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int l = len - 1;
    bool flag = false;
    for(int i=0;i<len;i++){
        if(str[i] == '[') flag = true;
        if(str[i] == ':' && flag == true){
            l = i;
            break;
        }
    }
    int r = 0;
    flag = false;
    for(int i=len-1;i>=0;i--){
        if(str[i] == ']') flag = true;
        if(str[i] == ':' && flag == true){
            r = i;
            break;
        }
    }
    if(r <= l){
        puts("-1");
        return 0;
    }
    int ans = 0;
    for(int i=l+1;i<r;i++){
        if(str[i] == '|') ans ++;
    }
    printf("%d\n", ans + 4);
    return 0;
}
