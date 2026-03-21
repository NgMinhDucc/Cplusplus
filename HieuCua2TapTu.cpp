#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        // tach cac tu trong xau va luu chung 1 lan duy nhat
        set<string> word1, word2;
        stringstream ss1(s1), ss2(s2);
        string word;
        while (ss1 >> word){
            word1.insert(word);
        }
        while (ss2 >> word){
            word2.insert(word);
        }

        // tim cac tu chi co o xau1 ma khong co o xau2
        vector<string> res;
        for (const string &s : word1){
            if (word2.find(s) == word2.end()){
                res.push_back(s);
            }
        }

        // sap xep theo tu dien
        sort(res.begin(), res.end());
        for (size_t i = 0; i < res.size(); i++){
            if (i > 0){
                cout << " ";
            }
            cout << res[i];
        }
        cout << endl;
    }
    return 0;
}