#include <bits/stdc++.h>
#define infinity 0x3f3f3f3f
#define max_node 25
using namespace std;
int edge[1005][1005],visits[1005],dist[1005],n,m;
 
void dijkstra(int x) {
    int path,v;
    memset(visits,0,sizeof(visits));
    for(int i=0; i<n; i++) {
        dist[i]=edge[x][i];
    }
    dist[x]=0;
    visits[x]=1;
    for(int i=0; i<n; i++) {
        path=infinity;
        for(int j=0; j<n; j++) {
            if(!visits[j]&&dist[j]<path) {
                path=dist[j];
                v=j;
            }
        }
        visits[v]=1;
        for(int j=0; j<n; j++) {
            if(!visits[j]&&edge[v][j]<infinity) {
                int tmp=max(dist[v],edge[v][j]);
                dist[j]=min(dist[j],tmp);
            }
        }
    }
}
 
int main() {
    int t,x;
    scanf("%d",&t);
    for(int i=0; i<t; i++) {
        scanf("%d %d",&n,&m);
        for(int i=0; i<n; ++i)
            for(int j=0; j<n; ++j)
                edge[i][j]=infinity;
        while(m--) {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            if(edge[u][v]>w) {
                edge[u][v]=w;
                edge[v][u]=w;
            }
        }
        scanf("%d",&x);
        dijkstra(x);
        printf("Case %d:\n",i+1);
        for(int i=0; i<n; i++) {
            if(dist[i]<infinity)
                printf("%d\n",dist[i]);
            else
                printf("Impossible\n");
        }
    }
    return 0;
}
