#include <bits/stdc++.h>
using namespace std;

bool sphenic(int n){
    int dem = 0; // dem so luong tsnt xuat hien
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            int xh = 0; // dem so lan 1 tsnt xuat hien
            while (n % i == 0){
                n /= i;
                xh++;
            }
            if (xh > 1){
                return false;
            }
            dem++;
        }
    }
    if (n > 1){
        dem++;
    }
    if (dem == 3){
        return true;
    }
    return false;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        if (sphenic(n)){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}
