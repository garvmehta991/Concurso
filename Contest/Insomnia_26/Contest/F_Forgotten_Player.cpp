#include <iostream>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

int zeroEmpty(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    int a = 0 , b = 1 ;
    for(int i = 3 ; i <= n ; i++) {
        int curr = (i-1) *(a+b) ;
        a = b ;
        b = curr ;
    }
    return b ;
}

int oneEmpty(int n) {
    if(n<3) return 0;
    if(n==3) return 6 ;
    return ( ((zeroEmpty(n-1) * (n-1) + oneEmpty(n-1))%998244353)*n ) % 998244353 ;
}
void solve() {
    int n ;
    cin>>n;
    cout<<zeroEmpty(n)<<endl<<oneEmpty(n)<<endl ;
        
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}