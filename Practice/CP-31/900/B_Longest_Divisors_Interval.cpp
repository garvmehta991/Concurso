#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n;
    cin >> n;
    ll m = -1;
    ll t = n;
    for (int i = 1; i < 100; i++)
    {
        int temp = 0;
        while (!(n % i))
        {
            temp++;
            t = n / i;
            i++;
            if (temp > m)
                m = temp;
        }
    }
    cout << m << endl;
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