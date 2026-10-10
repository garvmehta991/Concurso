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
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n - 4, 0);
    for (int i = 0; i < n - 4; i++)
    {
        b[i] = a[i] + a[i + 2] - a[i + 4];
    }
    vector<int> c = b ;
    sort(all(c)) ;
    ll p = 0;
    for(int i = 0; i < n - 5; i++){
        ll t = 0 ;
        while(i < n - 5 && c[i] == c[i+1]) {
            t++;
            i++;
        }
        p += ((t*(t+1))/2) ;
    }
    ll m = 0 ;
    for (int i = 0; i < n - 4; i++)
    {
        if(i+2 < n-4 && b[i] == b[i+2]) m++ ;
        if(i+4 < n-4 && b[i] == b[i+4]) m++ ;
    }
    cout << p-m<< endl;
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