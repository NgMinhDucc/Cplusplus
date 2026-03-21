#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        long long n;
        cin >> n;
        long long finnum = 1 + (n - 1) % 9;
        // cong thuc tinh tong so hoc: 1 + (n - 1) % 9
        cout << finnum << endl;
    }
    return 0;
}