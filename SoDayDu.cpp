#include <bits/stdc++.h>
using namespace std;

bool checknum(string &s){
    if (s[0] == '0'){
        cout << "INVALID" << endl;
        return false;
    } // so 0 o dau
    for (char c : s){
        if (!isdigit(c)){
            cout << "INVALID" << endl;
            return false;
        }
    } // xau co chu
    return true;
}

bool checkfull(string &s){
    bitset<10> digit; // tao 1 day 10 bit (0-9), mang gia tri 0 hoac 1
    for (char c : s){
        digit.set(c - '0'); // danh dau phan tu thu i la 1
    }
    return digit.all(); // tra ve true neu tat ca la 1. neu 1 phan tu khac 1 thi tra ve false
}

int main(){
    int test;
    cin >> test;
    while (test--){
        string s;
        cin >> s;
        if (!checknum(s)){
            continue;
        }
        else if (checkfull(s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}