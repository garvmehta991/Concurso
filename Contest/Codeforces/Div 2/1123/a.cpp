#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

int  main() {

    for(int i = 999999000; i < 1000000000; i++){
        cout << i << "\t" ;
        int temp = i ; 
        int t = 0 ; 
        for(int j = 0; j < 20; j++){
            while(temp) {
                t += ((temp%10)*(temp%10)) ;
                temp/=10;
            }
            temp = t ;
            t = 0 ;
            cout << temp << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}