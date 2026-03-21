#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++){
            cin >> b[i];
        }
        for (int i = 0; i < m; i++){
            a.push_back(b[i]); // add b's elements to the and of a
            n++; // increase a's size when each element is added
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}