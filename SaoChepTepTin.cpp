// can tao 2 file o cung thu muc voi file code hien tai truoc khi thuc hien sao chep hay bat ki thao tac nao khac
#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("PTIT.in");
    ofstream fout("PTIT.out");

    string s;
    while (getline(fin, s)){
        fout << s << endl; // sao chep
    }

    // dong file sau khi mo (neu chi mo 1 file thi khong dong cung duoc, nhung mo nhieu file ma khong dong thi chet don)
    fin.close();
    fout.close();
    return 0;
}