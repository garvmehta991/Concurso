#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x ^= a[i];
    }
    if (!x)
    {
        cout << 1 << endl
             << 1 << " " << n << endl;
    }
    else if (!(n & 1))
    {
        cout << 2 << endl
             << 1 << " " << n << endl
             << 1 << " " << n << endl;
    }
    else
    {
        cout << 4 << endl
             << 1 << " " << n << endl
             << 1 << " " << n - 1 << endl
             << n - 1 << " " << n << endl
             << n - 1 << " " << n << endl;
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