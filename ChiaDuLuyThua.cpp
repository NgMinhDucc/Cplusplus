#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// Modular exponentiation
long long chiadu(long long a, long long b, long long m){
    long long res = 1;
    a = a % m; // Reduce a to make it smaller and avoid overflow
    while (b > 0){ // Calculating b as a binary
        if (b & 1){
            res = (res * a) % m; // Multiply res by a and take m
        }
        a = (a * a) % m; // Square a and take m
        b >>= 1; // Right-shift b by one bit (divide it by 2)
    }
    return res;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        string a;
        long long b, m;
        cin >> a >> b >> m;
        long long num = 0;
        for (char digit : a){
            num = (num * 10 + (digit - '0')) % m;
        }
        cout << chiadu(num, b, m) << endl;
    }
    return 0;
}