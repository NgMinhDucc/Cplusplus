#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;
    PhanSo(long long tu = 1, long long mau = 1){
        this -> tu = tu;
        this -> mau = mau;
    } // use pointer this-> torefer to the current object's member variables

    friend istream& operator >> (istream &in, PhanSo &p){
        in >> p.tu >> p.mau;
        return in;
    }

    // insertion >>
    long long gcd(long long a, long long b){
        while (b != 0){
            long long uoc = a % b;
            a = b;
            b= uoc;
        }
        return a;
    }

    void rutgon(){
        long long GCD = gcd(tu, mau);
        tu /= GCD;
        mau /= GCD;
    }

    friend ostream& operator << (ostream &out, PhanSo p){
        cout << p.tu << "/" << p.mau;
        return out;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}