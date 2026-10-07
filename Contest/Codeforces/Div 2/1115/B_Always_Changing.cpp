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
    string s;
    cin >> s;
    int flag = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << 0 << endl;
        return;
    }
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
    }
    if (abs(n - 2 * one) > 2)
    {
        cout << -1 << endl;
        return;
    }
    int o = 0, z = 0;
    for (int i = 1; i < n; i++)
    {
        while (s[i] == s[i - 1])
        {
            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
            i++;
            if (i == n)
                break;
        }
    }
    int x = abs(o - z);
    if (x)
    {
        cout << 2 * min(o, z) + 2 * x - 1 << endl;
    }
    else
    {
        cout << 2 * o << endl;
    }
    return;
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