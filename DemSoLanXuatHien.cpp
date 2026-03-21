#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int dem = count(a.begin(), a.end(), x);
        // use count_if(a.begin(), a.end(), [x](int num) {return num...;}); if you want to count n with customized condition
        if (dem > 0){
            cout << dem << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}