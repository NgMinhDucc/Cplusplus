#include <iostream>
#include <algorithm>
using namespace std;

string add(string x, string y){
    string res;
    long long carry = 0, sum = 0;
    long long  i = x.size() - 1, j = y.size() - 1; // -1 is because of the index
    while (i >= 0 || j >= 0 || carry){
        sum = carry; // Ensure the remaining value is included in the calculation
        if (i >= 0){
            sum += x[i--] - '0';
        }
        if (j >= 0){
            sum += y[j--] - '0';
        }
        // Last digit of each string plus each other
        res += (sum % 10) + '0'; // Add the latest sum to the res, then convert from int into char
        carry = sum / 10;  // Carry the remaining value for the next iteration
    }
    reverse(res.begin(), res.end()); // Reverse the string
    return res;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        string x, y;
        cin >> x >> y;
        cout << add(x, y) << endl;
    }
    return 0;
}