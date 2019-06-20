/*
                              _                             _        _____   __
                             | |                           | |      | ____| / /
                          ___| |__   __ _ _____      ____ _| |_ __ _| |__  / /_
                         / __| '_ \ / _` / __\ \ /\ / / _` | __/ _` |___ \| '_ \
                         \__ \ | | | (_| \__ \\ V  V / (_| | || (_| |___) | (_) |
                         |___/_| |_|\__,_|___/ \_/\_/ \__,_|\__\__,_|____/ \___/

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forl(i,k,n)  for(i = k; i < n; ++i)
#define forg(i,k,n)  for(i = k; i >= n; --i)
#define forle(i,k,n)  for(i = k; i <= n; ++i)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for( auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); blockTime.second; debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false)
#define endl '\n'
typedef unsigned long long ull;
typedef long double ld;
typedef pair <ull, ull> p;
const int INF = (int) 1e9;
inline ll countSetBit(ll i) { i = i - ((i >> 1) & 0x55555555); i = (i & 0x33333333) + ((i >> 2) & 0x33333333); i = (i + (i >> 4)) & 0x0f0f0f0f; i = i + (i >> 8); i = i + (i >> 16); return i & 0x3f; }
inline void set_bit(ll &n, ll b) { n |= 1 << b; }
inline void unset_bit(ll &n, ll b) { n &= ~(1 << b); }
inline void toggle_bit(ll &n, ll b) { n ^= 1 << b; }
inline void swap(ll &a, ll &b) { a ^= b; b ^= a; a ^= b; }
inline int digitContain(ll a) { return (ll) (floor(log10(a)) + 1); }
inline bool isPoweroftwo(ll x) { return x && (!(x&(x-1))); }
inline ll ipow(ll base, ull exp) { ll result = 1; while (exp) { if (exp & 1) result *= base; exp >>= 1; if (!exp) break; base *= base; } return result; }
inline ll msd(ll n) { return ipow(10, (long double) (log10(n) - floor(log10(n)))); }
inline void fast_io() { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }
void solve();

int main()
{
	fast_io();
	time__("Runtime") {
	    solve();
	}
	return 0;
}

struct Lake {
    int x, y, sz;
    Lake(int i, int j, int k) {
        x = i;
        y = j;
        sz = k;
    }
};

char berland[50][50];
bool vis[50][50];
int n, m, k;
vector <Lake> lake;

bool cmp(Lake a, Lake b)
{
    return a.sz < b.sz;
}

void filter_ocean(int i, int j)
{
    if(i < 0 || i >=n || j < 0 || j >= m || berland[i][j] == '*' || vis[i][j]) return;
    vis[i][j] = true;
    filter_ocean(i + 1, j);
    filter_ocean(i - 1, j);
    filter_ocean(i, j + 1);
    filter_ocean(i, j - 1);
}

int lake_finder(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m) return 0;
    vis[i][j] = true;
    int sz = 1;
    if(!vis[i + 1][j] && berland[i + 1][j] == '.') sz += lake_finder(i + 1, j);
    if(!vis[i - 1][j] && berland[i - 1][j] == '.') sz += lake_finder(i - 1, j);
    if(!vis[i][j + 1] && berland[i][j + 1] == '.') sz += lake_finder(i, j + 1);
    if(!vis[i][j - 1] && berland[i][j - 1] == '.') sz += lake_finder(i, j - 1);
    return sz;
}

void fill_lake(int i, int j)
{
    if(i < 0 || i >=n || j < 0 || j >= m || berland[i][j] == '*' || vis[i][j]) return;
    vis[i][j] = true;
    berland[i][j] = '*';
    fill_lake(i + 1, j);
    fill_lake(i - 1, j);
    fill_lake(i, j + 1);
    fill_lake(i, j - 1);
}

void solve()
{
    int i, j, ans = 0;
    cin >> n >> m >> k;
    forl(i, 0, n) forl(j, 0, m) cin >> berland[i][j];
    memset(vis, 0, sizeof(vis));
    forl(i, 0, m) {
        if(!vis[0][i] && berland[0][i] == '.') filter_ocean(0, i);
        if(!vis[n - 1][i] && berland[n - 1][i] == '.') filter_ocean(n - 1, i);
    }
    forl(i, 0, n) {
        if(!vis[i][0] && berland[i][0] == '.') filter_ocean(i, 0);
        if(!vis[i][m - 1] && berland[i][m - 1] == '.') filter_ocean(i, m - 1);
    }
    forl(i, 0, n) forl(j, 0, m) if(!vis[i][j] && berland[i][j] == '.') {
        int sz = lake_finder(i, j);
        lake.push_back(Lake(i, j, sz));
    }
    sort(lake.begin(), lake.end(), cmp);
    memset(vis, 0, sizeof(vis));
    forl(i, 0, lake.size() - k) {
        ans += lake[i].sz;
        fill_lake(lake[i].x, lake[i].y);
    }
    cout << ans << endl;
    forl(i, 0, n) {
        forl(j, 0, m) cout << berland[i][j];
        cout << endl;
    }
}