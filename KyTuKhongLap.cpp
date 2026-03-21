#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        string s;
        cin >> s;
        unordered_map<char, int> freq; // store characters' frequencies
        for (char c  : s){
            freq[c]++; // increase by 1 whenever a character is repeated
        }
        for (char c : s){
            if (freq[c] == 1){
                cout << c; // print characters that only appear 1 time
            }
        }
        cout << endl;
    }
    return 0;
}