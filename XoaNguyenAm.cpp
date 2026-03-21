#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower); // convert every character to lowercase
    unordered_set<char> remove = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'}; // characters that need to be removed
    s.erase(remove_if(s.begin(), s.end(), [&](char c) {return remove.count(c);}), s.end()); // remove fixed characers
    for (char c : s){
        cout << "." << c;
    }
    return 0;
}