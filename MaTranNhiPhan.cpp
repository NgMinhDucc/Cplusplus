#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int count_rows = 0; // Count of rows where 1s > 0s

    for (int i = 0; i < N; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        int ones = a + b + c;   // Since values are only 0 or 1, sum gives count of 1s
        int zeros = 3 - ones;   // Remaining elements are 0s

        if (ones > zeros) {
            count_rows++;
        }
    }

    cout << count_rows << endl;
    return 0;
}
