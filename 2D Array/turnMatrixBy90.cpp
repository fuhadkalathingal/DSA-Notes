#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int> (n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = n-1; j >= 0; j--) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}