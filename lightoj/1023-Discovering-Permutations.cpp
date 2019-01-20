#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n, k;
    scanf("%d", &t);
    int x = t;
    while(t--) {
        char ch = 'A';
        string str;
        scanf("%d %d", &n, &k);
        while(n--) {
            str = str + ch;
            ch++;
        }
        printf("Case %d:\n", x-t);
        cout << str << endl;
        k--;
        while(k--) {
            if(next_permutation(str.begin(), str.end()))
                cout << str << endl;
            else
                break;
        }
    }
    return 0;
}
