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
    stack<int> m;
    vector<int> p;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == 49)
        {
            m.push(i);
        }
        else if (s[i - 1] == 50)
        {
            if (m.size())
            {
                p.push_back(m.top());
                m.pop();
            }
            else
            {
                p.push_back(i);
            }
        }
        else
        {
            p.push_back(i);
        }
    }
    cout << n - p.size() << endl;
    sort(all(p));
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        if (k < p.size() && i == p[k])
        {
            k++;
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
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