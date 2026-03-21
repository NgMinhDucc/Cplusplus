#include <bits/stdc++.h>
using namespace std;

void solve(){
    int test;
    cin >> test;
    while (test--){
        long long n;
        cin >> n;

        if (n == 1){
            cout << "1" << endl;
            continue;
        }
        if (n == 0){
            cout << "10" << endl;
            continue;
        }

        vector<int> num;
        for (int i = 9; i >= 2; i--){
            while (n % i == 0){
                num.push_back(i);
                n /= i;
            }
        }
        if (n != 1){
            cout << "-1" << endl;
        }
        else{
            sort(num.begin(), num.end());
            for (int i : num){
                cout << i;
            }
            cout << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}