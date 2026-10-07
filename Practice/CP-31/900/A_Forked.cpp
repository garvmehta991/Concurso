#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    int c = 0;
    set<pair<int, int>> k, q;
    k.insert({xk + a, yk + b});
    k.insert({xk - a, yk + b});
    k.insert({xk + a, yk - b});
    k.insert({xk - a, yk - b});
    k.insert({xk + b, yk + a});
    k.insert({xk - b, yk + a});
    k.insert({xk + b, yk - a});
    k.insert({xk - b, yk - a});
    q.insert({xq + a, yq + b});
    q.insert({xq - a, yq + b});
    q.insert({xq + a, yq - b});
    q.insert({xq - a, yq - b});
    q.insert({xq + b, yq + a});
    q.insert({xq - b, yq + a});
    q.insert({xq + b, yq - a});
    q.insert({xq - b, yq - a});
    for (const auto &p : k)
    {
        if (q.count(p))
        {
            c++;
        }
    }
    cout << c << "\n";
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