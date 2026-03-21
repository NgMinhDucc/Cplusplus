#include <bits/stdc++.h>
using namespace std;

string rev(string& s){
    reverse(s.begin(), s.end()); // reverse the whole string first
    size_t start = 0, end;
    while ((end = s.find(' ', start)) != string::npos){
        reverse(s.begin() + start, s.begin() + end);
        start = end + 1;
    } // reverse each word
    reverse(s.begin() + start, s.end()); // reverse the last word seperately since it's not followed by a ' '
    return s;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--){
        string s;
        getline(cin, s);
        cout << rev(s) << endl;
    }
    return 0;
}