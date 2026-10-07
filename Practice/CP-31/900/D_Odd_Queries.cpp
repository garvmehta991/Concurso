#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] & 1;
        x ^= a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int temp = x;
        for (int i = l - 1; i < r; i++)
        {
            temp ^= a[i];
        }
        temp ^= ((l - r + 1) & 1) & (k & 1);
        if (temp)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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