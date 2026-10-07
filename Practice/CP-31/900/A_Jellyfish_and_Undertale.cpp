#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> x(n);
    ll s = b;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] < a)
            s += x[i];
        else
            s += a - 1;
    }
    cout << s << endl;
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