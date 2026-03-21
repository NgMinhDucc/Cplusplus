#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, l, r;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        cin >> l >> r;
        while (l <= r && a[l] <= a[l + 1]){
            l++;
        }
        l++;
        while (l <= r && a[l] <= a[l - 1]){
            l++;
        }
        if (l > r){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}