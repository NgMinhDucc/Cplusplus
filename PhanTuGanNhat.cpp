// deo hieuuuuuuuuuuuuuuuuuuuuuu
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int k, x;
        cin >> k >> x;
        
        int i = lower_bound(a.begin(), a.end(), x) - a.begin(), j = i; // - begin() de tra kieu du lieu tu iterator ve index
        for (int I = k / 2; I >= 1; I--){
            cout << a[i - I] << " ";
        }
        if (a[j] == x){
            j++;
        }
        for (int I = 0; I < k / 2; I++){
            cout << a[j + I] << " ";
        }
        cout << endl;
    }
    return 0;
}