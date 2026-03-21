#include <bits/stdc++.h>
using namespace std;

int main(){
    long long test;
    cin >> test;
    while (test--){
        long long n, m, p;
        cin >> n >> m >> p;
        vector<long long> a(n), b(m), c(p);
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        for (long long i = 0; i < m; i++){
            cin >> b[i];
        }
        for (long long i = 0; i < p; i++){
            cin >> c[i];
        }

        vector<long long> tmp;
        vector<long long> res;
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(tmp));
        set_intersection(tmp.begin(), tmp.end(), c.begin(), c.end(), back_inserter(res));

        if (res.empty()){
            cout << "-1" << endl;
        }
        else{
            for (int i : res){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}