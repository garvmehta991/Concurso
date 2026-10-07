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
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        b[i] = abs(a[i] - i - 1);
        // cout<< b[i] << " ";
    }
    int flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i + 1] < b[i])
            flag = 0;
    }
    if (flag)
    {
        cout << "YES" << endl;
        return;
    }
    if (b[0] >= b[1])
    {
        int i = 0;
        for (; i < n - 1; i++)
        {
            if (b[i + 1] > b[i])
            {
                break;
            }
        }
        if (i != n - 1)
        {
            for (; i < n - 1; i++)
            {
                if (b[i + 1] <= b[i])
                {
                    break;
                }
            }
            if(i == n -1 ) {
                cout << "YES" << endl ;
                return ;
            }
        }
    }
    cout << "NO" << endl ;
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