#include <bits/stdc++.h>
using namespace std;

void sapxep(vector<long long>& a){
    set<long long> digit; // store every element of a
    for (long long num : a){
        while (num != 0){
            digit.insert(num % 10);
            num /= 10;
        }
    } // separate each element into digits
    for (int c : digit){
        cout << c << " ";
    }
    cout << endl;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sapxep(a);
    }
    return 0;
}