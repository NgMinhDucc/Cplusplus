#include <iostream>
using namespace std;

long long giaithua(int n){
    long long gt = 1;
    for (int i = n; i > 1; i--){
        gt *= i;
    }
    return gt;
}

long long sum(int n){
    long long tong = 0;
    for (int i = 1; i <= n; i++){
        tong += giaithua(i);
    }
    return tong;
}

int main(){
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}