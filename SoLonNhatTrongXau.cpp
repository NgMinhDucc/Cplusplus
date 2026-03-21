#include <bits/stdc++.h>
using namespace std;

int solonnhat(const string& s){
    int MAX = -1e9;
    int num = 0;
    bool number = false;
    for (char c : s){
        if (isdigit(c)){
            num = num * 10 + (c - '0');
            number = true;
        }
        else if (number){
            MAX = max(MAX, num);
            num = 0;
            number = false;
        }
    }
    if (number){
        MAX = max(MAX, num);
    }
    return MAX;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--){
        string s;
        getline(cin, s);
        cout << solonnhat(s) << endl;
    }
    return 0;
}