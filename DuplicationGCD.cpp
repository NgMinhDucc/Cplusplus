#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
    while (b != 0){
        long long uoc = a % b;
        a = b;
        b = uoc;
    }
    return a;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        long long a, x, y;
        cin >> a >> x >> y;
        long long ucln = gcd(x, y);
        for (int i = 1; i <= ucln; i++){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}