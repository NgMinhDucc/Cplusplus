#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool is_prime(int num) {
    if (num < 2) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find the first pair of primes summing to N
pair<int, int> find_prime_pair(int N) {
    for (int i = 2; i <= N / 2; i++) {
        if (is_prime(i) && is_prime(N - i)) {
            return {i, N - i};
        }
    }
    return {-1, -1};
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        pair<int, int> result = find_prime_pair(N);
        if (result.first == -1)
            cout << "-1" << endl;
        else
            cout << result.first << " " << result.second << endl;
    }
    return 0;
}
