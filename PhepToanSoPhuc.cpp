#include <bits/stdc++.h>
using namespace std;

struct sophuc{
    long long a, b;

    friend istream& operator >> (istream &in, sophuc &x){
        in >> x.a >> x.b;
        return in;
    }

    friend sophuc operator + (const sophuc x, const sophuc y){
        sophuc tong;
        tong.a = x.a  + y.a;
        tong.b = x.b + y.b;
        return tong;
    }

    friend sophuc operator - (const sophuc x, const sophuc y){
        sophuc hieu;
        hieu.a = x.a - y.a;
        hieu.b = x.b - y.b;
        return hieu;
    }

    friend sophuc operator * (const sophuc x, const sophuc y){
        sophuc tich;
        tich.a = x.a * y.a - x.b * y.b;
        tich.b = x.a * y.b + x.b * y.a;
        return tich;
    }

    friend ostream& operator << (ostream &out, sophuc x){
        out << x.a << " " << x.b;
        return out;
    }
};

int main(){
    sophuc a, b;
    cin >> a >> b;
    sophuc c = a + b, d = a - b, e = a * b;
    cout << c << endl << d << endl << e;
    return 0;
}