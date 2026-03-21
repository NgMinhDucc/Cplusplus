#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        string s;
        int k;
        cin >> s >> k;

        // luu cac chu cai da xuat hien (1 lan)
        unordered_set<char> appeared;
        for (char c : s){
            if (c >= 'a' && c <= 'z'){
                appeared.insert(c);
            }
        }

        // neu so chu cai con thieu <= k thi k hop le
        int missing = 26 - appeared.size();
        if (missing <= k){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}