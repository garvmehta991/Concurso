#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
   int n ;
   cin>>n;
   cout << 1 << " ";
   for(int i = n ; i > 1 ; i--) {
    cout<<i<<" ";
   }
   cout<<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}