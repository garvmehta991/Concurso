#include <iostream>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()


void solve() {
    int n , m ;
    cin>>n>>m ;
    int cnt = 0 ;
    for(int i = 1 ; i < n+1 ; i++) {
        for(int j = 1 ; j < m+1 ; j++){
            if((i%j + j%i) == (i|j)) {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}