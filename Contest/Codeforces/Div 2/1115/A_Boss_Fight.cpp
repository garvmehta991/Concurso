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
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(all(a));
    int max = 1;
    int m = 0;
    for (int i = 1; i < n; i++)
    {
        int temp = 1;
        while (a[i] == a[i - 1])
        {
            temp++;
            i++;
            if (i == n)
                break;
        }
        if (temp > max)
        {
            max = temp;
            m = a[i - 1];
        }
    }
    if (max > n / 2 + 1 && n > 2)
    {
        cout << sum - m * (max - 2 - (n - max)) << "\n";
    }
    else
    {
        cout << sum << "\n";
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