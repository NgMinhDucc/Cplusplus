#include <bits/stdc++.h>
using namespace std;

struct MatHang{
    long long ma;
    string ten, nhom;
    double mua, ban, loinhuan;
}; // thong tin mat hang

void nhap(MatHang ds[], long long n){
    for (long long i = 0; i < n; i++){
        ds[i].ma = i + 1;
        cin.ignore();
        getline(cin, ds[i].ten);
        getline(cin, ds[i].nhom);
        cin >> ds[i].mua >> ds[i].ban;
        ds[i].loinhuan = ds[i].ban - ds[i].mua;
    }
} // nhap thong tin

bool cmp(MatHang &a, MatHang &b){
    return a.loinhuan > b.loinhuan;
} // sap xep theo loi nhuan giam dan

void in(MatHang ds[], long long n){
    for (long long i = 0; i < n; i++){
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].nhom
            << " " << fixed << setprecision(2) << ds[i].loinhuan << endl;
    }
} // in thong tin

int main(){
    long long n;
    cin >> n;
    MatHang ds[n];
    nhap(ds, n);
    sort(ds, ds + n, cmp);
    in(ds, n);
    return 0;
}