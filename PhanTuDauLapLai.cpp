#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& a){
    unordered_set<int> duplicate; // store all the elements
    for (int i : a){
        if (duplicate.count(i)){
            return i; // return immediately when found the first number that is duplicated
        }
        duplicate.insert(i); // store those who are not duplicated
    }
    return -1; // return -1 if there is no number that is duplicated
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
        cout << search(a) << endl;
    }
    return 0;
}