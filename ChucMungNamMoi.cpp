#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    set<string> sentence;

    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        sentence.insert(s);
    }

    cout << sentence.size() << endl;

    return 0;
}
