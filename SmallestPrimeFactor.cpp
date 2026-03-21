#include <iostream>
#include <cmath>
using namespace std;

int smallestprime(int n){
    if (n == 1){
        return 1;
    }
    else if (n % 2 == 0){
        return 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2){
        if (n % i == 0){
            return i;
        }
    }
    return n;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cout << smallestprime(i) << " ";
        }
        cout << endl;
    }
    return 0;
}