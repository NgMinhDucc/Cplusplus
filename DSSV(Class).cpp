#include <bits/stdc++.h>
using namespace std;

int id = 1;
class SinhVien{
    // thong tin sinh vien
    public:
        string msv, hoten, lop, ngaysinh;
        float gpa;

    // nhap thong tin
    friend istream& operator >> (istream &in, SinhVien &sv){
        // tu dong tang id
        string s = to_string(id++);
        while (s.length() < 3){
            s = '0' + s;
        }
        sv.msv = "B20DCCN" + s;

        in.ignore();
        getline(in, sv.hoten);
        // chuan hoa ho ten
        transform(sv.hoten.begin(), sv.hoten.end(), sv.hoten.begin(), ::tolower);
        stringstream ss(sv.hoten);
        string word, name;
        while (ss >> word){
            word[0] = toupper(word[0]);
            name += word + " ";
        }
        name.pop_back();
        sv.hoten = name;
        in >> sv.lop >> sv.ngaysinh >> sv.gpa;
        
        // chuan hoa ngaysinh
        if (sv.ngaysinh.length() == 8){
            sv.ngaysinh = "0" + sv.ngaysinh.substr(0, 2) + "0" + sv.ngaysinh.substr(2);
        }
        else if (sv.ngaysinh.length() == 9){
            if (sv.ngaysinh[1] == '/'){
                sv.ngaysinh = "0" + sv.ngaysinh;
            }
            else{
                sv.ngaysinh = sv.ngaysinh.substr(0, 3) + "0" + sv.ngaysinh.substr(3);
            }
        }
        return in;
    }

    friend ostream& operator << (ostream &out, SinhVien sv){
        out << sv.msv << " " << sv.hoten << " " << sv.lop << " " << sv.ngaysinh
            << " " << fixed << setprecision(2) << sv.gpa;
        out << endl;
        return out;
    }
};

// sapxep gpa giam dan
bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[], int N){
    sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}