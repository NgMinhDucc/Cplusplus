#include <bits/stdc++.h>
using namespace std;

int giongnhau(vector<vector<int>> &a){
    int row = a.size();
    unordered_map<int, int> freq; // luu cac phan tu co trong ma tran
    for (int i = 0; i < row; i++){
        unordered_set<int> seen; // phat hien cac phan tu khac nhau va luu chung dung 1 lan
        for (int num : a[i]){
            seen.insert(num);
        }

        for (int num : seen){
            freq[num]++;
        }
    }

    int dem = 0;
    for (auto &pair : freq){
        if (pair.second == row){
            dem++;
        }
    }
    return dem;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        cout << giongnhau(a) << endl;
    }
    return 0;
}