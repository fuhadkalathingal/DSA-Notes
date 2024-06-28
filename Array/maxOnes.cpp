#include <bits/stdc++.h>
using namespace std;

int main() {
    int ar[4][4] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    int row[4];

    for(int i = 0; i < 4; i++) {
        row[i] = 0;
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            row[i] += ar[i][j];
        }
    }

    int max_index(0);
    int max_ele(0);

    for(int i = 0; i < 4; i++) {
        if(max_ele < row[i]) {
            max_ele = row[i];
            max_index = i;
        }
    }

    cout << max_index;

    return 0;
}