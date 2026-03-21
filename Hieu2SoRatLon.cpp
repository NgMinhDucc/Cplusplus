#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string x, string y){
	if (x.length() < y .length()){
		return true;
	}
	if (x.length() > y.length()){
		return false;
	}
	return x < y;
} // check if x is smaller than y

string subtraction(string x, string y){
	if (compare(x, y)){
		swap(x, y);
	} // ensure that x is always larger
	string res;
	long long borrow = 0, digitx = 0, digity = 0;
	long long i = x.size() - 1, j = y.size() - 1;
	while (i >= 0 || j >= 0){
		if (i >= 0){
			digitx = x[i--] - '0';
		}
		if (j >= 0){
			digity = y[j--] - '0';
		}
		else{
			digity = 0;
		}
		digitx -= borrow;
		if (digitx < digity){
			digitx += 10;
			borrow = 1;
		}
		else{
			borrow = 0;
		}
		res += (digitx - digity) + '0';
	}
	while (res.size() > 1 && res.back() == 0){
		res.pop_back();
	} // remove leading zeros
	reverse(res.begin(), res.end()); // reverse the string into the correct order
	return res;
}

int main(){
	int test;
	cin >> test;
	while (test--){
		string x, y;
		cin >> x >> y;
		cout << subtraction(x, y) << endl;
	}
	return 0;
}