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
    int m = 0;
    for (int i = 1; i < n; i++)
    {
        int temp = 0;
        while (s[i] == s[i - 1])
        {
            temp++;
            if (m < temp)
                m = temp;
            i++;
            if (i > n - 1)
                break;
        }
    }
    cout<< m + 2 <<endl;
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