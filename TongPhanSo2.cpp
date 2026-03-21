#include <bits/stdc++.h>
using namespace std;

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

struct PhanSo{
    long long tu, mau;
    PhanSo(long long tu  = 1, long long mau = 1){
        this->tu = tu;
        this-> mau = mau;
    }

    // insertion >>
    friend istream& operator >> (istream &in, PhanSo &x){
        in >> x.tu >> x.mau;
        return in;
    }

    void rutgon(){
        long long GCD = gcd(tu, mau);
        tu /= GCD;
        mau /= GCD;
    }

    friend PhanSo operator + (PhanSo p, PhanSo q){
        long long summau = lcm(p.mau, q.mau);
        long long sumtu = p.tu * (summau / p.mau) + q.tu * (summau / q.mau);
        PhanSo res(sumtu, summau);
        res.rutgon();
        return res;
    }

    friend ostream& operator << (ostream &out, PhanSo x){
        out << x.tu << "/" << x.mau;
        return out;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}