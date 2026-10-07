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
    cin>>a[0];
    int m = abs(a[0]  - 1);
    
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        m = gcd(abs(a[i] - i - 1) , m);
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