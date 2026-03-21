#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string hoten, lop, ngaysinh;
    float gpa;

    void nhap(){
        getline(cin, hoten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        cin >> gpa;
        if (ngaysinh[1] == '/'){
            ngaysinh = "0" + ngaysinh;
        }
        if (ngaysinh[4] == '/'){
            ngaysinh.insert(3, "0");
        }
    }

    void xuat(){
        cout << "B20DCCN001 " << hoten << " " << lop << " "
            << ngaysinh << " " << fixed << setprecision(2) << gpa;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}