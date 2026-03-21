#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        string s;
        cin >> s;
        int con = 0;
        con += s.size(); // so xau con co 1 phan tu
        while (s.size() != 0){
            char letter = s[0]; // bien danh dau phan tu dau cua xau
            for (int i = 1; i < s.size(); i++){
                if (s[i] == letter){
                    con++;
                } // neu trong xau co phan tu nao giong letter thi +1 xau con
            }
            s.erase(0, 1); // bo di phan tu dau cua xau
        }
        cout << con << endl;
    }
    return 0;
}