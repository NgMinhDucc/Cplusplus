#include <bits/stdc++.h>
using namespace std;

long long smallest(string s1, string s2){
    for (char &c : s1){
        if (c == '6'){
            c = '5';
        }
    }
    for (char &c : s2){
        if (c == '6'){
            c = '5';
        }
    }
    return stoll(s1) + stoll(s2);
}

long long biggest(string s1, string s2){
    for (char &c : s1){
        if (c == '5'){
            c = '6';
        }
    }
    for (char &c : s2){
        if (c == '5'){
            c = '6';
        }
    }
    return stoll(s1) + stoll(s2);
}

int main(){
    int test;
    cin >> test;
    while (test--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << smallest(s1, s2) << " " << biggest(s1, s2) << endl;
    }
    return 0;
}