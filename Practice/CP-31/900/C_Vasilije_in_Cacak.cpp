#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll s = (n * (n + 1)) / 2;
    ll m = (k * (k + 1)) / 2;
    ll y = s - ((n-k)*(n-k+1))/2 ;
    if (x >= m && x <= y)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}