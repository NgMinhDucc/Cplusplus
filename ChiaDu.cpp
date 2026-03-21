#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test; // input cases
    while (test--){
        int a, m;
        cin >> a >> m;
        bool evidence = false; // assume every case are false
        for (int x = 1; x < m; x++){
            if ((a * x) % m == 1){
                cout << x << endl;
                evidence = true;
                break;
            } // find out the min x, print x and break the loop
        }
        if (!evidence){
            cout << "-1" << endl;
        } // x is not found, print -1
    }
    return 0;
}