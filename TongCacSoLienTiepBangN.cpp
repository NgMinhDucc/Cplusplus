#include <bits/stdc++.h>
using namespace std;

void solve(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i * (i + 1) / 2 <= n; i++){
            int tu = 2 * n - i * (i - 1);
            if (tu % (2 * i) == 0){
                int a = tu / (2 * i);
                if (a >= 1){
                    count++;
                }
            }
        }   
        cout << count - 1 << endl;
    }
}

int main(){
    solve();
    return 0;
}