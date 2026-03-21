#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string hoten, lop, ngaysinh;
    float gpa;
    public: // make this a static member to use with struct
        static string chuanhoa(string s){
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            stringstream ss(s);
            string word, name;
            while (ss >> word){
                word[0] = toupper(word[0]);
                name += word + " ";
            }
            name.pop_back();
            return name;
        }

    // insertion >>
    friend istream& operator >> (istream &in, SinhVien &x){
        getline(in, x.hoten);
        x.hoten = SinhVien::chuanhoa(x.hoten);
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