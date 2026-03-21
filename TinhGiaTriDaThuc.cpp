#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long dathuc(const vector<long long>& p, long long x){
    long long res = 0;
    long long power = 1;
    for (long long i : p){
        res = (res * x % MOD + i) % MOD;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long test;
    cin >> test;
    while (test--){
        long long n, x;
        cin >> n >> x;
        vector<long long> p(n);
        for (long long i = 0; i < n; i++){
            cin >> p[i];
        }
        cout << dathuc(p, x) << endl;
    }
    return 0;
}