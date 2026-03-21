#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;

    friend istream& operator >> (istream &in, PhanSo &p){
        in >> p.tu >> p.mau;
        return in;
    }
};

long long gcd(long long a, long long b){
    while (b != 0){
        long long uoc = a % b;
        a = b;
        b = uoc;
    }
    return a;
}

long long lcm(long long a, long long b){
    long long boi = a / gcd(a, b) * b;
    return boi;
}

void process(PhanSo &A, PhanSo &B){
    long long tongmau = lcm(A.mau, B.mau);
    long long tongtu = A.tu * (tongmau / A.mau) + B.tu * (tongmau / B.mau);
    PhanSo C;
    C.tu = pow(tongtu, 2);
    C.mau = pow(tongmau, 2);
    long long GCD1 = gcd(C.tu, C.mau);
    C.tu /= GCD1;
    C.mau /= GCD1;
    cout << C.tu << "/" << C.mau << " ";
    PhanSo D;
    D.tu = A.tu * B.tu * C.tu;
    D.mau = A.mau * B.mau * C.mau;
    long long GCD2 = gcd(D.tu, D.mau);
    D.tu /= GCD2;
    D.mau /= GCD2;
    cout << D.tu << "/" << D.mau << endl;
}

int main(){
    long long t;
    cin >> t;
    while (t--){
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
    return 0;
}