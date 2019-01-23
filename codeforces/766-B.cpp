#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,a,b,c;
    while (cin >> t)
    {
        int chk=0;
        vector <int> vec;
        for (i=0; i<t; i++)
        {
            cin >> n;
            vec.push_back(n);
        }
        sort(vec.begin(),vec.end());
        for (j=0; j<t-2; j++)
        {
            a = vec[j];
            b = vec[j+1];
            c = vec[j+2];
            if (a+b > c && b+c > a && c+a > b)
            {
                chk = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if (chk == 0)
            cout << "NO" << endl;
    }
return 0;
}
