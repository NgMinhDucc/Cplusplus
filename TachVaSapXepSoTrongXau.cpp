#include <bits/stdc++.h>
using namespace std;

vector<string> split(string s){
    vector<string> res;
    string num = "";
    for (char c : s){
        if (isdigit(c)){
            num += c;
        }
        else if(!num.empty()){
            while (num.length() > 1 && num[0] == '0'){
                num.erase(num.begin());
            }
            res.push_back(num);
            num = "";
        }
    }
    if (!num.empty()){
        while (num.length() > 1 && num[0] == '0'){
            num.erase(num.begin());
        }
        res.push_back(num);
    }
    return res;
}

bool cmp(string a, string b){
    if (a.size() != b.size()){
        return a.size() < b.size();
    }
    return a < b;
}

void solve(){
    int test;
    cin >> test;
    vector<string> number;
    while (test--){
        string s;
        cin >> s;
        vector<string> nums = split(s);
        number.insert(number.end(), nums.begin(), nums.end());
    }
    sort(number.begin(), number.end(), cmp);
    for (string n : number){
        cout << n << endl;
    }
}

int main(){
    solve();
    return 0;
}