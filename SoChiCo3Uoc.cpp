#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

const long long MAX = 1000000; // Only calculating to 10^6
vector<long long> prime(MAX + 1, true);
vector<long long> squarenum; // To store perfest squares

void sieve(){
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAX; i++){
        if(prime[i]){
            for (int j = i * i; j <= MAX; j += i){
                prime[j] = false;
            }
        }
    } // Checking prime
    for (int i = 2; i <= MAX; i++){
        if (prime[i]){ // Check if the square root if a prime
            squarenum.push_back(1LL * i * i); // dynamically store in the array
        }
    }
}

int count(long long n){
    int dem = 0;
    for (long long scp : squarenum){
        if (scp > n) break;
        dem++;
    }
    return dem;
} // With each perfect stored, count by one

int main(){
    sieve(); // Precalculate all the primes
    int test;
    cin >> test; // input cases
    while (test--){
        long long n;
        cin >> n;
        cout << count(n) << endl;
    }
    return 0;
}