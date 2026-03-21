#include <bits/stdc++.h>
using namespace std;

int legendre(int n, int p){
    int x = 0;
    while (n){
        x += n / p;
        n /= p;
    }
    return x;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, p;
        cin >> n >> p;
        cout << legendre(n, p) << endl;
    }
    return 0;
}