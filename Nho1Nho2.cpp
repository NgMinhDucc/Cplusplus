#include <bits/stdc++.h>
using namespace std;

int  main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int min1 = a[0], min2 = -1;
        for (int i = 0; i < n; i++){
            if (a[i] != min1){
                min2 = a[i];
                break;
            }
        }
        if (min2 != -1){
            cout << min1 << " " << min2 << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}