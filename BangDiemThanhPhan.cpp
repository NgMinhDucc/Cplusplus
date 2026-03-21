#include <bits/stdc++.h>
using namespace std;

// thong tin sinh vien
struct SinhVien{
    string msv, hoten, lop;
    float d1, d2, d3;
};

// nhap thong tin
void nhap(SinhVien &ds){
    cin >> ds.msv;
    cin.ignore();
    getline(cin, ds.hoten);
    cin >> ds.lop >> ds.d1 >>ds.d2 >> ds.d3;
}

// sap xep ma sinh vien tang dan
bool cmp(SinhVien &a, SinhVien &b){
    return a.msv < b.msv;
}

void sap_xep(SinhVien *ds, int n){
    sort(ds, ds + n, cmp);
}

// in thong tin
void in_ds(SinhVien *ds, int n){
    for (int i = 0; i < n; i++){
        cout << i + 1 << " " << ds[i].msv << " " << ds[i].hoten << " " << ds[i].lop
             << " " << fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3;
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}