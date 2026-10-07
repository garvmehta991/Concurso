#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // If the problem states "strictly less than", N is 9696968
    // If it means "<= 9696969", change this to 9696969
    int N = 9696969; 
    
    // Initialize phi array where phi[i] = i
    vector<int> phi(N + 1);
    for (int i = 0; i <= N; i++) {
        phi[i] = i;
    }
    
    // Sieve to compute Euler's Totient Function
    for (int i = 2; i <= N; i++) {
        // If phi[i] == i, it means i is a prime number
        if (phi[i] == i) { 
            for (int j = i; j <= N; j += i) {
                phi[j] -= phi[j] / i;
            }
        }
    }
    
    // Sum all phi values
    ll sum_phi = 0;
    for (int i = 1; i <= N; i++) {
        sum_phi += phi[i];
    }
    
    // Apply the formula for the 2D grid
    ll total_pairs = 2 * sum_phi - 1;
    
    cout << total_pairs << "\n";
    
    return 0;
}