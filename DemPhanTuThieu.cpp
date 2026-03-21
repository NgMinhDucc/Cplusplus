#include <bits/stdc++.h>
using namespace std;

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
        int l = *min_element(a.begin(), a.end()); // calculate the smallest element
        int r = *max_element(a.begin(), a.end()); // calculate the largest element
        unordered_set<int> s(a.begin(), a.end()); // sort the array
        int count = 0;
        for (int i = l; i < r; i++){
            if (s.find(i) == s.end()){
                count++;
            }
        } // if the missing element is not found, count + 1
        cout << count << endl;
    }
    return 0;
}