#include <bits/stdc++.h>
using namespace std;

long long sum(const string& s){
    long long sum = 0, num = 0;
    bool number = false;
    for (char c : s){
        if (isdigit(c)){
            num = num * 10 + (c - '0');
            number = true;
        }
        else if (number){
            sum += num;
            num = 0;
            number = false;
        }
    }
    if (number){
        sum += num;
    }
    return sum;
}

int main(){
    int test;
    cin >> test;
    while (test--){
        string s;
        cin >> s;
        cout << sum(s) << endl;
    }
    return 0;
}