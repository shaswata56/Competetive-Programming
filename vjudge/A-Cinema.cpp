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
inline void fast_io() { ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void solve();

int main()
{
	fast_io();
	time__("Runtime") {
	    solve();
	}
	return 0;
}

void solve()
{
    int n, a, i, m, maxb = 0, maxc = 0, res = 0;
    cin >> n;
    map <int, int> lang;
    forl(i, 0, n) {
        cin >> a;
        lang[a]++;
    }
    cin >> m;
    int b[m], c[m];
    forl(i, 0, m) cin >> b[i];
    forl(i, 0, m) cin >> c[i];
    forl(i, 0, m) {
        if(lang[b[i]] > maxb) {
            maxb = lang[b[i]];
            maxc = lang[c[i]];
            res = i;
        } else if(lang[b[i]] == maxb && lang[c[i]] > maxc) {
            maxc = lang[c[i]];
            res = i;
        }
    }
    cout << res + 1 << endl;
}
