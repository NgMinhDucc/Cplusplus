#include <bits/stdc++.h>
using namespace std;

void multiply(vector<int> &a, int n){
    // nhan doi nhung thang hhop le, thang nao khong hop le cho = 0
    for (int i = 0; i < n - 1; i++){
        if (a[i] != 0 && a[i] == a[i + 1]){
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }

    // day nhung thang hop le vao save
    vector<int> save;
    for (int i = 0; i < n; i++){
        if (a[i] != 0){
            save.push_back(a[i]);
        }
    }

    // lap day khoang trong bang so 0
    while (save.size() < n){
        save.push_back(0);
    }

    for (int i = 0; i < n; i++){
        cout << save[i] << " ";
    }
    cout << endl;
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
        multiply(a, n);
    }
    return 0;
}