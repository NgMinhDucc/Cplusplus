#include <bits/stdc++.h>
using namespace std;

int id = 1;

class GiangVien{
    public:
        string mgv, hoten, ten, bomon, mon;
    friend istream& operator >> (istream &in, GiangVien &gv){
        string s = to_string(id++);
        while (s.length() < 2) s = "0" + s;
        gv.mgv = "GV" + s;
        scanf("\n");
        getline(in, gv.hoten);
        getline(in, gv.bomon);
        stringstream ss1(gv.hoten);
        string s1;
        while (ss1 >> s1) gv.ten = s1;
        stringstream ss2(gv.bomon);
        string s2, res = "";
        while (ss2 >> s2) res += toupper(s2[0]);
        gv.mon = res;
        return in;
    }

    friend ostream& operator << (ostream &out, GiangVien gv){
        out << gv.mgv << " " << gv.hoten << " " << gv.mon;
        out << endl;
        return out;
    }
};

bool cmp(GiangVien a, GiangVien b){
    if (a.ten == b.ten) return a.mgv < b.mgv;
    return a.ten < b.ten;
}

int main(){
    GiangVien ds[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> ds[i];
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; i++) cout << ds[i];
    return 0;
}