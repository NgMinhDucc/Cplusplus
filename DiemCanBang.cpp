#include <bits/stdc++.h>
using namespace std;
#define ll long long

int DiemCanBang(int n, vector<int> &a){
    ll whole_sum = 0;
    for (int i = 0; i < n; i++){
        whole_sum += a[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++){
        whole_sum -= a[i];
        if (whole_sum == sum) return i + 1;
        sum += a[i];
    }
    return -1;
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
        cout << DiemCanBang(n, a) << endl;
    }
    return 0;
}