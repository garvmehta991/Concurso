#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c ;
    cin>>a>>b>>c;
    if(a<b) cout<<"Second\n";
    else if(a==b) {
        if(c&1 == 1) cout<<"First\n";
        else {
            cout<<"Second\n";
        }
    }
    else {
        cout <<"First\n";
    }
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}