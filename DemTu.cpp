#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    cin.ignore(); // ignore the leftover newline
    while (test--){
        string s;
        getline(cin, s); // read everything on the line, including space, tab and \n
        stringstream ss(s); // create a stringstream that reads from the inputted string
        string word;
        int count = 0;
        while (ss >> word){
            count++;
        } // for every word extracted to word, count increases by 1
        cout << count << endl;
    }
    return 0;
}