#include <bits/stdc++.h>
using namespace std;

string removing(string s, string remove){
    size_t pos = s.find(remove); // access to the index of the charater
    if (pos != string::npos){ // if the character is found
        s.erase(pos, remove.length()); // remvove the charater
        if (pos > 0 && s[pos - 1] == ' '){
            s.erase(pos - 1, 1);
        } // remove the extra space
    }
    return s;
}

int main(){
    string s;
    getline(cin, s);
    string remove;
    getline(cin, remove);
    cout << removing(s, remove) << endl;
    return 0;
}