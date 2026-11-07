#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define endl '\n'
#define all(x) (x).begin(), (x).end()



ll shortest(ll n, vector<ll>ans, vector<bool> vis,ll idx,ll& done)
{
    if(done==1)
    return 1;
    if(idx==n)
    {
        for(ll i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        done=1;
        return 1;
    }

    for(ll i=1;i<=n;i++)
    {
        if(!vis[i-1])
        {
            if(ans.size()==0)
            {
                ans.push_back(i);
                vis[i-1]=true;
                shortest(n,ans,vis,idx+1,done);
                vis[i-1]=false;
                ans.pop_back();
            }
            else
            {
                if((abs(i-ans[idx-1]))==2||(abs(i-ans[idx-1]))==3)
                {
                    ans.push_back(i);
                    vis[i-1]=true;
                    shortest(n,ans,vis,idx+1,done);
                    vis[i-1]=false;
                    ans.pop_back();
                }
            }
        }
    }

    return -1;
}

void solve() {
    ll n;
    cin>>n;
    vector<bool>vis(n,false);
    vector<ll>ans;
    ll idx=0;
    ll done=0;
    shortest(n,ans,vis,idx,done);
     if(shortest(n,ans,vis,idx,done)==-1)
     {
         cout<<-1<<endl;
     }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
```
1 
-1
-1
2 4 1 3
1 3 5 2 4
1 3 5 2 4 6
1 3 6 4 2 5 7
1 3 6 8 5 2 4 7
1 3 5 2 4 7 9 6 8
1 3 5 2 4 6 8 10 7 9
1 3 5 2 4 6 8 10 7 9 11
1 3 5 2 4 6 8 11 9 7 10 12
1 3 5 2 4 6 8 11 13 10 7 9 12
1 3 5 2 4 6 8 10 7 9 12 14 11 13
1 3 5 2 4 6 8 10 7 9 11 13 15 12 14
1 3 5 2 4 6 8 10 7 9 11 13 15 12 14 16
1 3 5 2 4 6 8 10 7 9 11 13 16 14 12 15 17
1 3 5 2 4 6 8 10 7 9 11 13 16 18 15 12 14 17
1 3 5 2 4 6 8 10 7 9 11 13 15 12 14 17 19 16 18
1 3 5 2 4 6 8 10 7 9 11 13 15 12 14 16 18 20 17 19
```