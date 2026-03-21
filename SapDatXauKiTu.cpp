#include <bits/stdc++.h>
using namespace std;

bool check(string &s){
    // dem so lan xuat hien cua moi chu cai
    map<char, int> freq;
    for (char c : s){
        freq[c]++;
    }

    // thang nao xuat hien nhieu nhat ma vot <= (n + 1)/2 thi khong can xet may thang con lai nua
    int biggestfreq = 0;
    for (const auto &C : freq){
        if (C.second > biggestfreq){
            biggestfreq = C.second;
        }
    }
    return biggestfreq <= (s.length() + 1) / 2;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        string s;
        cin >> s;
        if (check(s)){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}