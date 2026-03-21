#include <iostream>
using namespace std;

int main(){
	int year = 0, week = 0, day;
	cin >> day;
	if (day >= 365){
		year = day / 365;
		day = day % 365;
	}
	if (day >= 7){
		week = day / 7;
		day = day % 7;
	}
	cout << year << " " << week << " " << day;
    return 0;
}
