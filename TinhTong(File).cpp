#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <climits>  // For INT_MAX and INT_MIN

using namespace std;

int main() {
    ifstream fin("DATA.in");
    string s;
    long long tong = 0;

    while (getline(fin, s)) {
        size_t n = s.size();
        for (size_t i = 0; i < n; ) {
            if (isdigit(s[i])) {
                size_t j = i;
                while (j < n && isdigit(s[j])) ++j;

                string num_str = s.substr(i, j - i);

                try {
                    long long val = stoll(num_str);
                    if (val >= INT_MIN && val <= INT_MAX) {
                        tong += val;
                    }
                } catch (...) {
                    // Skip invalid or overflowed numbers
                }
                i = j;
            }
            else {
                ++i;
            }
        }
    }

    cout << tong << endl;
    return 0;
}
