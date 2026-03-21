#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, word;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<string> words;
    stringstream ss(s); // split s into words
    while (ss >> word){ // extract splitted words to word
        words.push_back(word); // add to words and automatically resize
    }
    string email = words.back(); // last word of the s is the first word of the email
    for (size_t i = 0; i < words.size() - 1; i++){
        email += words[i][0]; // the next 2 letters is the first letter of each word (except the last one) in s
    }
    cout << email << "@ptit.edu.vn";
    return 0;
}