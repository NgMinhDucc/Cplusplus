#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test; // input cases
    while (test--){
        string n;
        cin >> n;
        size_t location = n.find("084"); // find the national code "084" int the string
        if (location != string::npos){
            n.erase(location, 3); // if find, remove from the string
        }
        cout << n << endl;
    }
    return 0;
}