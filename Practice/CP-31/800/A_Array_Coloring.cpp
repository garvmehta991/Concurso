#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ;
    cin>>n;
    vector<int> arr(n,0) ;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i] ;
        arr[i] %= 2;
        sum+=arr[i] ;
    }
    if(sum & 1) {
        cout << "NO\n";
    }
    else {
        cout<<"YES\n";
    }
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}