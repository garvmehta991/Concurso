#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n - k == 1)
    {
        cout << "YES\n";
        return;
    }
    vector<int> a(27);
    for (int i = 0; i < n; i++)
    {
        a[(int)s[i] - 96]++;
    }
    int o = 0, e = 0;
    for (int i = 1; i < 27; i++)
    {
        if (a[i])
        {
            if (a[i] & 1)
                o++;
            else
                e++;
        }
    }
    int x = o - k;
    if (x > 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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