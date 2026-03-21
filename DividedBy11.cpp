#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test; // input cases

    while (test--){
        string n;
        cin >> n; // initialize n as a string to handle extremely large number

        long long evensum = 0, oddsum = 0;

        for (size_t i = 0; i < n.length(); i++){
            int digit = n[i] - '0'; // convert each element from char into int
            if (i % 2 == 0){
                evensum += digit;
            }
            else{
                oddsum += digit;
            }
        } // calculate even-positioned sum and odd-positioned sum
        
        long long dif = evensum - oddsum;
        if (dif % 11 == 0){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
        // if the different is divided by 11, the given number is divided by 11
    }
    return 0;
}