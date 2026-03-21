#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> aa(n, -1); // initialize an array full of -1 to place a[i] in later
        for (int i = 0; i < n; i++){
            if (a[i] >= 0 && a[i] < n){
                aa[a[i]] = a[i]; // place a[i] in the correct index
            }
        }
        for (int i = 0;  i < n; i++){
            cout << aa[i] << " ";
        }
        cout << endl;
    }
    return 0;
}