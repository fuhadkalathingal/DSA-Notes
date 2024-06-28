#include <bits/stdc++.h>
using namespace std;

int maximumOnesRow(vector<vector<int>> &V) {
    int max_ones = INT_MIN;
    int max_ones_row = -1;
    int columns = V[0].size();

    for(int i = 0; i < V.size(); i++) {
        for(int j = 0; j < V[i].size(); i++) {
            if(V[i][j] == 1) {
                int number_of_ones = columns - j;
                if(number_of_ones > max_ones) {
                    max_ones = number_of_ones;
                    max_ones_row = i;
                } 
            }
        }
    }

    return max_ones_row;
}

int leftMostOneRow(vector<vector<int>> &V) {
    int leftMostOnes = -1;
    int maxOnesRow = -1;
    int j = V[0].size() -1;

    while(j >= 0 && V[0][j] == 1) {
        leftMostOnes = j;
        maxOnesRow = 0;
        j--;
    }

    for(int i = 1; i < V.size(); i++) {
        while(j >= 0 && V[i][j] == 1) {
            leftMostOnes = j;
            j--;
            maxOnesRow = i;
        }
    }

    return maxOnesRow;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int> (m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int res = maximumOnesRow(matrix);
    cout <<  res << endl;
 
    return 0;
}