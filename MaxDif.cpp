#include <bits/stdc++.h>
using namespace std;

void hieu(vector<int> &a){
    int maxdif = -1;
    int n = a.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[j] <= a[i]){
                continue;
        }
        maxdif = max(maxdif, a[j] - a[i]);
        }
    }
    cout << maxdif << endl;
}

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
        hieu(a);
    }
    return 0;
}