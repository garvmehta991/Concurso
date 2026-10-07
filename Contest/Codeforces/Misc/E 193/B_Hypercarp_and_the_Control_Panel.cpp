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
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i && a[i] == a[i - 1])
            p++;
    }
    if (p == n - 1)
    {
        cout << 1 << endl;
        return;
    }
    if (!p)
    {
        cout << n << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (i < n - 2 && a[i] == a[i - 1] && a[i] != a[i + 1] && a[i + 1] == a[i + 2])
        {
            cout << n - p + 2 << endl;
            return;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            if (i == n - 2 && a[i] != a[i + 1])
            {
                cout << n - p + 1 << endl;
                return;
            }
            else if (i < n - 2 && a[i] != a[i + 1])
            {
                if (a[i] != a[i + 2])
                {
                    cout << n - p + 1 << endl;
                    return;
                }
            }
            if (i == 2 && a[i] != a[i - 2])
            {
                cout << n - p + 1 << endl;
                return;
            }
            else if (i > 2 && a[i] != a[i - 2])
            {
                if (a[i] != a[i - 3])
                {
                    cout << n - p + 1 << endl;
                    return;
                }
            }
        }
    }

    cout << n - p << endl;
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