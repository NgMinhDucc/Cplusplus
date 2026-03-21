#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
        }
        vector<int> U, I;
        set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(U));
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(I));
        for (int i : U){
            cout << i << " ";
        }
        cout << endl;
        for (int i : I){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int test;
//     cin >> test;
//     while (test--){
//         int n, m;
//         cin >> n >> m;
//         vector<int> a(n), b(m);
//         for (int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         for (int i = 0; i < m; i++){
//             cin >> b[i];
//         }
//         set<int> U(a.begin(), a.end());
//         U.insert(b.begin(), b.end());
//         for (int i : U){
//             cout << i << " ";
//         }
//         cout << endl;
//         set<int> bset(b.begin(), b.end());
//         for (int i : a){
//             if (bset.find(i) != bset.end()){
//                 cout << i << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }