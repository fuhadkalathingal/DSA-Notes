#include <bits/stdc++.h>
using namespace std;

void spiralOrder(vector<vector<int>>& mat) {
    int left = 0;
    int right = mat[0].size()-1;
    int top = 0;
    int bottom = mat.size()-1;

    int direction =  0;

    while(left <= right && top <= bottom) {
        if(direction == 0) {
            for(int col = 0; col <= right; col++) {
                cout << mat[top][col] << " ";
            }
            top++;
        }else if(direction == 1) {
            for(int row = top; row <= bottom; row++) {
                cout << mat[row][right] << " ";
            }
            right--;
        }else if(direction == 2) {
            for(int col = right; col >= left; col--) {
                cout << mat[bottom][col] << " ";
            }
            bottom--;
        }else{
            for(int row = bottom; row >= top; row--) {
                cout << mat[row][left] << " ";
            }
            left++;
        }

        direction = (direction+1)%3;
    }
}

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int> (m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    spiralOrder(mat);

    return 0;
}