#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if (n < 2) {
        return false;
    }
    else if (n > 2) {
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                return false;
            }
        }
        return true;
    }
}

int sumdigit(int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool smith(int n){
    if (prime(n)){
        return false;
    }
    int sumn = sumdigit(n);
    int sumsmith = 0;
    int temp = n;
    for (int i = 2; i <= sqrt(temp); i++){
        while (n % i == 0){
            sumsmith += sumdigit(i);
            n /= i;
        }
    }
    if (n > 1){
        sumsmith += sumdigit(n);
    }
    return sumn == sumsmith;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        if (smith(n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}