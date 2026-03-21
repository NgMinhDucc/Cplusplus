#include <bits/stdc++.h>
using namespace std;

class SinhVien {
public:
    string msv, ten, lop, email;

    friend istream &operator >> (istream &in, SinhVien &a) {
        scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.email);
        return in;
    }

    friend ostream &operator << (ostream &out, SinhVien a) {
        out << a.msv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
        return out;
    }
};

int main() {
    int n;
    cin >> n;

    SinhVien ds[1000];
    for (int i = 0; i < n; ++i) {
        cin >> ds[i];
    }

    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
        for (int i = 0; i < n; ++i) {
            if (ds[i].lop[1] == s[2] && ds[i].lop[2] == s[3])
                cout << ds[i];
        }
    }
    return 0;
}