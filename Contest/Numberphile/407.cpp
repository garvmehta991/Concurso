#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Fast prime checking in O(sqrt(num))
bool isPrime(ll num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    
    // Check divisors up to the square root of the number
    for (ll i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll N = 12345678910LL; // Use LL suffix for large literals

    // Start at N and go backwards
    // for (ll i = N; i >= 2; --i) {
    //     if (isPrime(i)) {
    //         cout << i << "\n";
    //         break; // Stop as soon as we find the largest one
    //     }
    // }
    cout << ((12345678899%998244353)*(12345678899%998244353))%998244353 <<endl;
    return 0;
}