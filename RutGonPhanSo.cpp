#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;
};

void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}

long long gcd(long long a, long long b){
    while (b != 0){
        long long uoc = a % b;
        a = b;
        b = uoc;
    }
    return a;
}

void rutgon(PhanSo &p){
    long long GCD = gcd(p.tu, p.mau);
    p.tu /= GCD;
    p.mau /= GCD;
}

void in(PhanSo p){
    cout << p.tu << "/" << p.mau;
}

int main(){
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}