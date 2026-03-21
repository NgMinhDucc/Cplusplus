#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    int test;
    cin >> test; // input cases
    while (test--){
        string n;
        cin >> n; // input number
        bool evidence = true; // assume each element is true according to the task
        for (size_t i = 0; i < n.length() - 1; i++){
            int current = n[i] - '0';
            int next = n[i + 1] - '0';
            // convert char to int
            if (abs(current - next) != 1){
                evidence = false;
                break;
            } // if the difference is not 1, break the loop
        }
        if (evidence){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}