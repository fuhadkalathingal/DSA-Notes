#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> createSpiralMatrix(int n) {
    vector<vector<int>> mat(n, vector<int> (n));

    int left = 0; 
    int right = n-1;
    int top = 0;
    int bottom = n-1;

    int direction = 0;
    int value = 1;

    while(left <= right && top <= bottom) {
        if(direction == 0) {
            for(int col = left; col <= right; col++) {
                mat[top][col]=value++;
            }
            top++;
        }else if(direction == 1) {
            for(int row = top; row <= bottom; row++) {
                mat[row][right] = value++;
            }
            right--;
        }else if(direction == 2) {
            for(int col = right; col >= left; col--) {
                mat[bottom][col] = value++;
            }
            bottom--;
        }else{
            for(int row = bottom; row >= top; row--) {
                mat[row][left] = value++;
            }
            left++;
        }

        direction = (direction+1)%4;
    }

    return mat;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int> (n));

    mat = createSpiralMatrix(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}