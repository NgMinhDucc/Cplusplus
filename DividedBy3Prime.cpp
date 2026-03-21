#include <iostream>
using namespace std;

// Function to compute GCD using Euclidean Algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

// Function to compute LCM
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; // To avoid overflow
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        long long X, Y, Z, N;
        cin >> X >> Y >> Z >> N;

        // Find LCM of X, Y, and Z
        long long lcm_XY = lcm(X, Y);
        long long lcm_XYZ = lcm(lcm_XY, Z);

        // Smallest N-digit number
        long long lowerBound = 1;
        for (int i = 1; i < N; i++) {
            lowerBound *= 10; // 10^(N-1)
        }

        // Find the first multiple of LCM >= lowerBound
        long long result = (lowerBound % lcm_XYZ == 0) ? lowerBound : (lowerBound / lcm_XYZ + 1) * lcm_XYZ;

        // Check if it's an N-digit number
        if (result < lowerBound * 10) {
            cout << result << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
