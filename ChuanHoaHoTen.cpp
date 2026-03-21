#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string &s){
    // chuyen het ho ten thanh chu thuong
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word){
        // viet hoa chu cai dau roi chuyen vo words
        word[0] = toupper(word[0]);
        words.push_back(word);
    }
    string name = ""; // bien luu ho ten
    string ten = words.back(); // ten cuoi
    transform(ten.begin(), ten.end(), ten.begin(), ::toupper);
    // chuyen tung phan tu 1 trong words vao name
    for (int i = 0; i < words.size() - 1; i++){
        name += words[i] + " ";
    }
    name.pop_back(); // xoa dau " " cuoi
    return name + ", " + ten;
}

int main(){
    string s;
    getline(cin, s);
    cout << chuanhoa(s);
    return 0;
}