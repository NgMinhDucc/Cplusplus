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
        auto elm = find(a.begin(), a.end(), x); // find the position of x in the array
        if (elm != a.end()){
            int pos = distance(a.begin(), elm) + 1; // convert its position into 1-based
            cout << pos << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}