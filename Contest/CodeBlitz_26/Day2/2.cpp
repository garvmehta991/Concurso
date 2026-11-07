#include <iostream>
using namespace std;

int main() {
    int n , m , count = 0 ;
    cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin>>arr[i];
        arr[i] %= m;
        for(int j = 0 ; j <= i ; j++) {
            if((arr[i]+arr[j])%m == arr[i]+arr[j]) {
                count++;
            }
        }
    }
    cout<<count<<endl;


}