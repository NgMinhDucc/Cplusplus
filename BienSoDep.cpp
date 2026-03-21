#include <bits/stdc++.h>
using namespace std;

bool tangchat(string s){
    for (int i = 0; i < 4; i++){
        if (s[i] >= s[i + 1]){
            return false;
        }
    }
    return true;
}

bool bang(string s){
    for (int i = 0; i < 5; i++){
        if (s[i] != s[0]){
            return false;
        }
    }
    return true;
}

bool bangbang(string s){
    return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

bool solocphat(string s){
    for (int i = 0; i < 5; i++){
        if (s[i] != '6' && s[i] != '8'){
            return false;
        }
    }
    return true;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--){
        string bien;
        cin >> bien;
        string num = bien.substr(5, 6);
        num.erase(3, 1);
        if (tangchat(num) || bang(num) || bangbang(num) || solocphat(num)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}