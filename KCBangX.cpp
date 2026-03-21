#include <bits/stdc++.h>
using namespace std;

bool kc(int n, int x, vector<int> &a){
    unordered_set<int> seen;
    for (int i = 0; i < n; i++){
        if (seen.count(a[i] - x) || seen.count(a[i] + x)){ // find element that are x smaller or larger than the previous one
            return true;
        }
        seen.insert(a[i]); // save the right element for future comparasion
    }
    return false;
}

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
        if (kc(n, x, a)){
            cout << "1" << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}