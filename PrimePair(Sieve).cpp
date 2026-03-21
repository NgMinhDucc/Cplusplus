#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 10000;
vector<bool> is_prime(MAX_N + 1, true);

// Sieve of Eratosthenes to precompute prime numbers
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void find_prime_pair(int N) {
    for (int p = 2; p <= N / 2; p++) {
        int q = N - p;
        if (is_prime[p] && is_prime[q]) {
            cout << p << " " << q << "\n";
            return;
        }
    }
    cout << "-1" << endl;
}

int main() {
    sieve(); // Precalculate primes
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        find_prime_pair(N);
    }
    
    return 0;
}
