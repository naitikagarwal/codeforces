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
        vll a(n);
        bool ok = false;
        rep(i, 0, n - 1)
        {
            cin >> a[i];
            if (i != 0)
            {
                if (abs(a[i] - a[i - 1]) <= 1)
                {
                    ok = true;
                }
            }
        }
        if (ok)
        {
            cout << 0;
            nl;
        }
        else if (n == 2)
        {
            cout << -1;
            nl;
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < n - 1 && !flag; i++)
            {
                ll L = min(a[i], a[i + 1]);
                ll R = max(a[i], a[i + 1]);

                if (i > 0)
                {
                    ll nle = a[i - 1] - 1;
                    ll nr = a[i - 1] + 1;
                    if (max(L, nle) <= min(R, nr))
                        flag = true;
                }

                if (!flag && i + 1 < n - 1)
                {
                    ll nle = a[i + 2] - 1;
                    ll nr = a[i + 2] + 1;
                    if (max(L, nle) <= min(R, nr))
                        flag = true;
                }
            }

            if (flag)
                cout << 1 << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}
