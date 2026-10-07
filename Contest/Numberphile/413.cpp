#include <iostream>

const long long MOD = 998244353;

// Modular exponentiation to compute (base^exp) % MOD
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Modular inverse using Fermat's Little Theorem
long long modInverse(long long n) {
    return power(n, MOD - 2);
}

int main() {
    long long n = 449499949;

    long long num = 1;
    long long den = 1;

    // Compute 2nCn in O(n)
    for (long long i = 0; i < n; i++) {
        num = (num * (2 * n - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }

    long long combination = (num * modInverse(den)) % MOD;
    
    // Divide by (n + 1) using its modular inverse
    long long catalan = (combination * modInverse(n + 1)) % MOD;

    std::cout << catalan << std::endl;
    return 0;
}
