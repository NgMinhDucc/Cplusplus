#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++){
        if ((int)sqrt(i) * (int)sqrt(i) == i){
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}