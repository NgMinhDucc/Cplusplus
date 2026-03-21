#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }

        int top = 0, bottom = n - 1, left = 0, right = m - 1;
        vector<int> res;
        while (top <= bottom && left <= right){
            // top, left to right
            for (int i = left; i <= right; i++){
                res.push_back(a[top][i]);
            }
            top++;

            // right, top to bottom
            for (int i = top; i <= bottom; i++){
                res.push_back(a[i][right]);
            }
            right--;

            if (top <= bottom){
                // bottom, right to left
                for (int i = right; i >= left; i--){
                    res.push_back(a[bottom][i]);
                }
                bottom--;
            }

            // left, bottom to top
            if (left <= right){
                for (int i = bottom; i >= top; i--){
                    res.push_back(a[i][left]);
                }
                left++;
            }
        }

        for (int i = 0; i < n * m; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}