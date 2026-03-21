#include <iostream>
using namespace std;

void factorize(long long n) {
    if (n == 1){
        cout << "1 1";
        return;
    } // special case
    long long count = 0;
    while (n % 2 == 0){
        n /= 2;
        count++;
    }
    if (count > 0){
        cout << "2 " << count << endl;
    }  // if n is even, its factors are just 2 
    for (long long i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0){
            cout << i << " " << count << endl;
        }
    } // factorizing
    if (n > 1){
        cout << n << " 1";
    } // if n is still prime that > 1, print n
}

int main() {
    long long n;
    cin >> n;
    factorize(n);
    cout << endl;
    return 0;
}
