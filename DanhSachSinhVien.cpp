#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string msv, hoten, lop, ngaysinh;
    float gpa;
}; // thong tin sinh vien

string chuanhoahoten(string &s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream ss(s);
    string word, name;
    while (ss >> word){
        word[0] = toupper(word[0]);
        name += word + " ";
    }
    name.pop_back();
    return name;
} // chuan hoa ho ten

void nhap(SinhVien ds[], int N){
    for (int i = 0; i < N; i++){
        // tu dong tang id
        stringstream ss;
        ss << "B20DCCN" << setw(3) << setfill('0') << i + 1;
        ds[i].msv = ss.str();

        cin.ignore();
        getline(cin, ds[i].hoten);
        cin >> ds[i].lop >> ds[i].ngaysinh >> ds[i].gpa;
        
        //chuan hoa ngay sinh
        if (ds[i].ngaysinh.length() == 8){
            ds[i].ngaysinh = "0" + ds[i].ngaysinh.substr(0, 2) + "0" + ds[i].ngaysinh.substr(2);
        }
        else if (ds[i].ngaysinh.length() == 9){
            if (ds[i].ngaysinh[1] == '/'){
                ds[i].ngaysinh = "0" + ds[i].ngaysinh;
            }
            else{
                ds[i].ngaysinh = ds[i].ngaysinh.substr(0, 3) + "0" + ds[i].ngaysinh.substr(3);
            }
        }

    }
} // nhap thong tin

// sap xep gpa giam dan
bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N){
    sort(ds, ds + N, cmp);
}

void in(SinhVien ds[], int N){
    for (int i = 0; i < N; i++){
        cout << ds[i].msv << " " << chuanhoahoten(ds[i].hoten) << " " << ds[i].lop
            << " " << ds[i].ngaysinh << " " << fixed << setprecision(2) << ds[i].gpa;
        cout << endl;
    }
} // in thong tin

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}