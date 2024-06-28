#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int matrix1[n][n], matrix2[n][n], resultMatrix[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int value = 0;
            for(int k = 0; k < n; k++) {
                value += matrix1[i][k] * matrix2[k][j];
            }
            resultMatrix[i][j] = value;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}