#include <bits/stdc++.h>
using namespace std;

void dif(vector<int>& a){
    sort(a.begin(), a.end()); // sort the array
    int MIN = 1e9;
    for (size_t i = 1; i < a.size(); i++){ // start from 1 to avoid accessing to a[-1]
        MIN = min(MIN, a[i] - a[i - 1]);
    }
    cout << MIN << endl;
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
        dif(a);
    }
    return 0;
}