#include <bits/stdc++.h>
using namespace std;

class DN{
	public:
		string ma, ten;
		int tts;
	
	friend istream& operator >> (istream &in, DN &dn){
		scanf("\n");
		getline(in, dn.ma);
		getline(in, dn.ten);
		in >> dn.tts;
		return in;
	}
	
	friend ostream& operator << (ostream &out, DN dn){
		out << dn.ma << " " << dn.ten << " " << dn.tts;
		out << endl;
		return out;
	}
};

bool cmp(DN a, DN b){
	if (a.tts == b.tts) return a.ma < b.ma;
	return a.tts > b.tts;
}

int main(){
	DN ds[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> ds[i];
	}
	sort(ds, ds + n, cmp);
	int Q;
	cin >> Q;
	while (Q--){
		int a, b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
		for (int i = 0; i < n; i++){
			if (ds[i].tts > b) continue;
			if (ds[i].tts < a) break;
			cout << ds[i];
		}
	}
	return 0;
}