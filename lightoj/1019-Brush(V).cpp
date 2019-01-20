#include <bits/stdc++.h>
using namespace std;
int dist[1010][1010];
int n, m, test = 1;
 
void dijkstra() {
    for (int t = 1; t <= n; t++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (dist[i][t] != 1e8 && dist[t][j] != 1e8 && dist[i][j] > dist[i][t] + dist[t][j])
                    dist[i][j] = dist[i][t] + dist[t][j];
 
    if (dist[1][n] >= 1e8)
        printf("Case %d: Impossible\n", test++);
    else
        printf("Case %d: %d\n", test++, dist[1][n]);
 
}
 
int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        scanf("%d %d", &n, &m);
        memset(dist, 0x3f, sizeof(dist));
 
        for (int i = 1; i <= n; i++)
            dist[i][i] = 0;
        int u, v, d;
        for (int i = 0; i < m; i++) {
            scanf("%d %d %d", &u, &v, &d);
            dist[u][v] = dist[v][u] = min(dist[u][v], d);
        }
        dijkstra();
    }
    return 0;
}
