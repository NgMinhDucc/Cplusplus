#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        string binary;
        cin >> binary;
        int remainder = 0;
        for (char c : binary){
            remainder = (remainder * 2 + (c - '0')) % 5;
        }
        if (remainder == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}