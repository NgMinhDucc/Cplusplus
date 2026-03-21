#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(const string& n){
    size_t len = n.length();
    for (size_t i = 0; i < len / 2; i++){
        if (n[i] != n[len - i - 1]){
            return false;
        }
    }
    return true;
} // check if n is a palindrome or not

bool evencheck(const string& n){
    size_t len = n.length();
    for (size_t i = 0; i < len; i++){
        if (n[i] % 2 != 0){
            return false;
        }
    }
    return true;
} // check if every digit of n is even or not

int main(){
    int test;
    cin >> test; // input cases
    while (test--){
        string n;
        cin >> n; // input number n
        if (palindrome(n) && evencheck(n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}