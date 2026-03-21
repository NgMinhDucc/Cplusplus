#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int k, n;
        cin >> k >> n;
        vector<vector<int>> a(k, vector<int>(n));
        for (int i = 0; i < k; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        vector<int> s;
        for (int i = 0; i < k; i++){
            for (int j = 0; j < n; j++){
                s.push_back(a[i][j]); // add b's elements to the end of a
            }
        }
        sort(s.begin(), s.end());
        for (int c : s){
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}