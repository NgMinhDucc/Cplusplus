#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string hoten, lop, ngaysinh;
    float gpa;

    // insertion >>
    friend istream& operator >> (istream &in, SinhVien &x){
        getline(in, x.hoten);
        in >> x.lop >> x.ngaysinh >> x.gpa;
        if (x.ngaysinh[1] == '/'){
            x.ngaysinh = "0" + x.ngaysinh;
        }
        if (x.ngaysinh[4] == '/'){
            x.ngaysinh.insert(3, "0");
        }
        return in;
    }

    // extraction <<
    friend ostream& operator << (ostream &out, SinhVien x){
        out << "B20DCCN001 " << x.hoten << " " << x.lop << " "
            << x.ngaysinh << " " << fixed << setprecision(2) << x.gpa;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}