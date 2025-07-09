// Aur Bhai Dekhne aagaye ;)
// Author: Naitik Agarwal
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("no-stack-protector")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
// #pragma GCC optimize("fast-math")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define fr(n) for (int i = 0; i < n; i++)
#define nesfr(x, y)             \
    for (int i = 0; i < x; i++) \
        for (int j = 0; j < y; j++)
#define rep1(i, a, b) for (int i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n), b(n);
        fr(n) cin >> a[i];
        fr(n) cin >> b[i];
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n - i; j++)
            {
                if (a[j - 1] > a[j])
                {
                    swap(a[j - 1], a[j]);
                    ans.push_back({1, j - 1});
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n - i; j++)
            {
                if (b[j - 1] > b[j])
                {
                    swap(b[j - 1], b[j]);
                    ans.push_back({2, j - 1});
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                swap(a[i], b[i]);
                ans.push_back({3, i});
            }
        }
        cout << ans.size();
        nl;
        for (auto &p : ans)
        {
            cout << p.first << " " << p.second + 1 << endl;
        }
    }
    return 0;
}
