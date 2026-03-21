#include <bits/stdc++.h>
using namespace std;

int id = 1;

class GiangVien{
	public:
		string mgv, hoten, bomon, mon;
		
	friend istream& operator >> (istream& in, GiangVien &gv){
		string s = to_string(id++);
		while (s.length() < 2){
			s = "0" + s;
		}
		gv.mgv = "GV" + s;
		
		scanf("\n");
		getline(in, gv.hoten);
		getline(in, gv.bomon);
		
		stringstream ss(gv.bomon);
		string s1, res = "";
		while (ss >> s){
			res += toupper(s[0]);
		}
		gv.mon = res;
		
		return in;
	}
	
	friend ostream& operator << (ostream &out, GiangVien gv){
		out << gv.mgv <<  " " << gv.hoten << " " << gv.mon;
		out << endl;
		return out;
		}
};

bool truyvan(string a, string b){
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	return (b.find(a) != -1);
}

int main(){
	GiangVien ds[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> ds[i];
	}
	int Q;
	cin >> Q;
	while (Q--){
		string s;
		cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (int i = 0; i < n; i++){
			if (truyvan(s, ds[i].hoten)){
				cout << ds[i];
			}
		}
	}
	return 0;
}