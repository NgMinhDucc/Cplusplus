#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;
};

void nhap(PhanSo &x){
    cin >> x.tu >> x.mau;
}

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

PhanSo tong(PhanSo &p, PhanSo &q){
    long long summau = lcm(p.mau, q.mau);
    long long sumtu = p.tu * (summau / p.mau) + q.tu * (summau / q.mau);
    long long GCD = gcd(sumtu, summau);
    PhanSo result;
    result.tu = sumtu / GCD;
    result.mau = summau / GCD;
    return result;
}

void in(PhanSo x){
    cout << x.tu << "/" << x.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}