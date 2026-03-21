#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    public:
        string msv, hoten, lop, email;
    
    friend istream& operator >> (istream &in, SinhVien &sv){
        scanf("\n");
        getline(in, sv.msv);
        getline(in, sv.hoten);
        getline(in, sv.lop);
        getline(in, sv.email);
        return in;
    }

    friend ostream& operator << (ostream &out, SinhVien sv){
        cout << sv.msv << " " << sv.hoten << " " << sv.lop << " " << sv.email;
        cout << endl;
        return out;
    }
};

string truyvan(string s){
    if (s == "Ke toan") return "KT";
    if (s == "Cong nghe thong tin") return "CN";
    if (s == "An toan thong tin") return "AT";
    if (s == "Vien thong") return "VT";
    if (s == "Dien tu") return "DT";
}

int main(){
    SinhVien ds[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ds[i];
    }
    int Q;
    cin >> Q;
    while (Q--){
        scanf("\n");
        string s;
        getline(cin, s);
        string nganh = truyvan(s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        for (int i = 0; i < n; ++i) {
            if (nganh == "CN" || nganh == "AT") {
                if (ds[i].msv[5] == nganh[0] && ds[i].msv[6] == nganh[1] && ds[i].lop[0] != 'E')
                    cout << ds[i];
            }
            else {
                if (ds[i].msv[5] == nganh[0] && ds[i].msv[6] == nganh[1])
                    cout << ds[i];
            }
        }
    }
    return 0;
}