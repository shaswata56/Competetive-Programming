#include <bits/stdc++.h>
using namespace std;
vector<int> bottle;
int n, m;

int binarysearch(int l, int r){
    while(l < r)
    {
        int mid = (l+r) >> 1;
        int max = 0;
        int contnr = 0;
        for(int i = 0; i < bottle.size(); i++)
        {
            max += bottle[i];
            if(max > mid)
            {
                max = bottle[i];
                contnr++;
            }
            else if(max == mid)
            {
                max = 0;
                contnr++;
            }
        }
        if(max > 0)
        {
            contnr++;
        }
        if(contnr > m)
        {
            l = mid+1;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}

int main(){
    while(cin >> n >> m)
    {
        int temp;
        int l = 0, r = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            bottle.push_back(temp);
            if(temp > l) l = temp;
            r += temp;
        }
        cout << binarysearch(l, r) << endl;
        bottle.clear();
    }
    return 0;
}
