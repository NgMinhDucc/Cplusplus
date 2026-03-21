#include <iostream>
#include <cmath>
using namespace std;

long long factorize(long long n){
    long long maxprime = -1e9;
    while (n % 2 == 0){
        maxprime = 2;
        n /= 2;
    }
    for (long long i = 3; i <= sqrt(n); i += 2){
        while (n % i == 0){
            maxprime = i;
            n /= i;
        }
    }
    if (n > 1){
        maxprime = n;
    }
    return maxprime;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        cout << factorize(n) << endl;
    }
    return 0;
}