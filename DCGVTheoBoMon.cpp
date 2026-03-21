#include <bits/stdc++.h>
using namespace std;

class GiangVien {
public:
    string mgv, hoten, bomon, ten, mon;

    friend istream &operator >> (istream &in, GiangVien &gv) {
        scanf("\n");
        getline(cin, gv.hoten);
        getline(cin, gv.bomon);

        string s, res = "";
        stringstream ss(gv.bomon);
        while (ss >> s) {
            res += toupper(s[0]);
        }
        gv.mon = res;

        return in;
    }

    friend ostream &operator << (ostream &os, GiangVien a) {
        cout << a.mgv << " " << a.hoten << " " << a.mon << "\n";
        return os;
    }
};

int main() {
    int n;
    cin >> n;
    GiangVien a[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        a[i].mgv = "GV" + to_string(i + 1);
        if (i + 1 < 10) 
            a[i].mgv.insert(2, "0");
    }

    int q;
    cin >> q;
    scanf("\n");
    while (q--) {
        string str, s, res = "";
        getline(cin, str);
        stringstream ss(str);
        while (ss >> s) {
            res += toupper(s[0]);
        }

        cout << "DANH SACH GIANG VIEN BO MON " << res << ":\n";
        for (int i = 0; i < n; ++i) {
            if (a[i].mon == res)
                cout << a[i];
        }
    }
    return 0;
}