#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string hoten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    long long thue;
    string hopdong;
};

void nhap(NhanVien &a){
    // use this condition to prevent cin.ignore() from eating the first letter whenever nhap() is called
    static bool first = true;
    if (first){
        cin.ignore();
        first = false;
    }
    getline(cin, a.hoten);
    getline(cin, a.gioitinh);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    cin >> a.thue;
    cin.ignore();
    getline(cin, a.hopdong);
}

void inds(NhanVien ds[], int n){
    for (int i = 0; i < n; i++){
        cout << setw(5) << setfill('0') << i + 1 << " ";
        cout << ds[i].hoten << " " << ds[i].gioitinh << " " << ds[i].ngaysinh << " "
            << ds[i].diachi << " " << ds[i].thue << " " << ds[i].hopdong << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}