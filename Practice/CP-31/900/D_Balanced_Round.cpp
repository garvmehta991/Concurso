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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    int m = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = 0;
        while (a[i+1] - a[i] <= k)
        {
            temp++;
            if (temp > m)
                m = temp;
            i++;
            if (i > n - 2)
                break;
        }
    }
    cout << n - m -1 << endl;
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