#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        char d101[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'}; // de 101
        char d102[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'}; // de 102
        int made;
        cin >> made; // nhap ma de
        char answer[15];
        for (int i = 0; i < 15; i++){
            cin >> answer[i]; // nhap cau tra loi
        }
        float diem = 0;
        for (int i = 0; i < 15; i++){
            if (made == 101 && answer[i] == d101[i] || made == 102 && answer[i] == d102[i]){
                diem++;
            }
        }
        cout << fixed << setprecision(2) << diem * 10.0 / 15 << endl;
    }
    return 0;
}