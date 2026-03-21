#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string msv, hoten, lop, ngaysinh;
    float gpa;
};

void nhapThongTinSV(SinhVien &a){
    a.msv = "N20DCCN001";
    getline(cin, a.hoten);
    cin >> a.lop >> a.ngaysinh >> a.gpa;

    // chuan hoa
    if (a.ngaysinh.length() == 8){
        a.ngaysinh = "0" + a.ngaysinh.substr(0, 2) + "0" + a.ngaysinh.substr(2);
    }
    else if (a.ngaysinh.length() == 9){
        if (a.ngaysinh[1] == '/'){
            a.ngaysinh = "0" + a.ngaysinh;
        }
        else{
            a.ngaysinh = a.ngaysinh.substr(0, 3) + "0" + a.ngaysinh.substr(3);
        }
    }
    /*
    // chuan hoa
    if (a.ngaysinh[1] == '/'){
        a.ngaysinh = "0" + a.ngaysinh;
    }
    if (a.ngaysinh[4] == '/'){
        a.ngaysinh.insert(3, "0");
    }
    */
}

void inThongTinSV(SinhVien a){
    cout << a.msv << " " << a.hoten << " " << a.lop << " " << a.ngaysinh
        << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}