#include <bits/stdc++.h>
using namespace std;

int main(){
    long long test;
    cin >> test;
    while (test--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        stable_partition(a.begin(), a.end(), [](long long x) {return x != 0;});
        for (long long i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}