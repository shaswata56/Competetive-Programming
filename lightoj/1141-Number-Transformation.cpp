#include <bits/stdc++.h>
using namespace std;
int p[505], visited[1005];
 
void primegen() {
    int n=0;
    p[n++] = 2;
    for (int i=3; i<1010; i=i+2) {
        bool prime=true;
        for (int j=3; j*j<=i; j=j+2) {
            if (i % j == 0) {
                prime=false;
                break;    
            }
        }  
        if(prime)
            p[n++] = i;
    }
}
 
int bfs(int to_factor, int to_transfrom) {
    if(to_factor > 100 || to_transfrom > 1000) return -1;
    list< pair<int,int> > q;
    q.push_back(make_pair(to_factor, 0));
    while(!q.empty()) {
        int source = q.front().first;
        int dist = q.front().second;
        visited[source] = true;
        q.pop_front();
        if(source == to_transfrom) {
                return dist;
            }
        for(int i = 0; source+p[i] <= to_transfrom; i++) {
 
            if((source+p[i] == to_transfrom) && (source % p[i] == 0) && (source != p[i])) {
                return dist+1;
            }
            else if((!visited[source+p[i]]) && (source % p[i] == 0) && (source != p[i])) {
                q.push_back(make_pair(source+p[i], dist+1));
            }
        }
    }
    return -1;
}
 
int main() {
    primegen();
    int T, x, t, s;
    scanf("%d", &T);
    x = T;
    while(T--) {
        memset(visited, 0, sizeof(visited));
        scanf("%d %d", &s, &t);
        int out = bfs(s, t);
        printf("Case %d: %d\n", x-T, out);
    }
    return 0;
}
