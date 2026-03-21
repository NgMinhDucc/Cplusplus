#include <bits/stdc++.h>
using namespace std;

// check so nguyen to
bool prime(long long n) {
    if (n < 2){
        return false;
    }
    else if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }
    for (int i = 3; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

// check binh phuong so nguyen to
void only3divisors(long long l, long long r){
    int dem = 0;
    for (long long i = 2; i * i <= r; ++i){
        if (prime(i)){
            long long bp = i * i;
            if (bp >= l && bp <= r){
                ++dem;
            }
        }
    }
    cout << dem << endl;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        long long l, r;
        cin >> l >> r;
        only3divisors(l, r);
    }
    return 0;
}
