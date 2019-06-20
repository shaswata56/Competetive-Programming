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

map <p, p> dp;

p dfs(p in)
{
    ull cur = 1, res;
    if(in.second < 10) return make_pair(in.first || in.second, in.second - max(in.first, in.second));
    if(dp.find(in) != dp.end()) return dp[in];
    while (cur <= in.second / 10) cur *= 10;
    p mi = dfs(make_pair(max(in.first, in.second / cur), in.second % cur));
    res = mi.first;
    mi = dfs(make_pair(in.first, in.second / cur * cur + mi.second));
    return dp[in] = make_pair(mi.first + res, mi.second);
}

void solve()
{
    ull x;
    cin >> x;
    cout << dfs(make_pair(0, x)).first << endl;
}