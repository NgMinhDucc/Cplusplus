#include <bits/stdc++.h>
using namespace std;

struct NguoiDan{
    string ten, ngaysinh;
}; // thong tin nguoi dan

void nhap(NguoiDan ds[], long long n){
    for (long long i = 0; i < n; i++){
        cin >> ds[i].ten;
        cin >> ds[i].ngaysinh;
    }
} // nhap thong tin

bool cmp (NguoiDan &a, NguoiDan &b){
    int da = stoi(a.ngaysinh.substr(0, 2));
    int ma = stoi(a.ngaysinh.substr(3, 2));
    int ya = stoi(a.ngaysinh.substr(6, 4));

    int db = stoi(b.ngaysinh.substr(0, 2));
    int mb = stoi(b.ngaysinh.substr(3, 2));
    int yb = stoi(b.ngaysinh.substr(6, 4));

    if (ya != yb){
        return ya < yb;
    }
    if (ma != mb){
        return ma < mb;
    }
    return da < db;
}

void sapxep(NguoiDan ds[], long long n){
    sort(ds, ds + n, cmp);
} // sap xep tu gia den tre

int main(){
    long long n;
    cin >> n;
    struct NguoiDan ds[n];
    nhap(ds, n);
    sapxep(ds, n);
    cout << ds[n - 1].ten << endl << ds[0].ten;
    return 0;
}