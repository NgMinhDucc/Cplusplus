#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    // thong tin sinh vien
    string msv, hoten, lop, email;

    // nhap thong tin
    void nhap(){
        scanf("\n");
        getline(cin, msv);
        getline(cin, hoten);
        getline(cin, lop);
        getline(cin, email);
    }

    // in thong tin
    void in(){
        cout << msv << " " << hoten << " " << lop << " " << email;
        cout << endl;
    }
};

// in thong tin sinh vien theo lop
void truyvan(SinhVien ds[], int n){
    string s;
    cin >> s;
    cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
    for (int i = 0; i < n; i++){
        if (ds[i].lop == s){
            ds[i].in();
        }
    }
}

int main(){
    SinhVien ds[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        ds[i].nhap();
    }
    int Q;
    cin >> Q;
    while (Q--){
        truyvan(ds, n);
    }
    return 0;
}