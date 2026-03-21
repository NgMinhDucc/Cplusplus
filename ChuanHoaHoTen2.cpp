#include <bits/stdc++.h>
using namespace std;

// ham chuan hoa ho ten
string ChuanHoaHoTen(string s){
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

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--){
        int w;
        cin >> w;
        cin.ignore();
        string s;
        getline(cin, s);
        string namae = ChuanHoaHoTen(s);

        // tach cac phan trong ten sau khi chuan hoa
        stringstream ss(namae);
        vector<string> part;
        string word;
        while (ss >> word){
            part.push_back(word);
        }

        // chinh sua theo kieu duoc chon
        if (w == 1){ // chuyen ten len dau
            cout << part.back();
            for (int i = 0; i < part.size() - 1; i++){
                cout << " " << part[i];
            }
        }
        else if (w == 2){ //chuan ho xuong cuoi
            for (int i = 1; i < part.size(); i++){
                cout << part[i] << " ";
            }
            cout << part[0];
        }
        cout << endl;
    }
    return 0;
}