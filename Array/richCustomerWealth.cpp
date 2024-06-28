#include <bits/stdc++.h>
using namespace std;

int main() {

    int ar[2][3] = {
        {1,2,3},
        {5,2,1}
    };

    int max_wealth(0);
    for(int i = 0; i < 2; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum += ar[i][j];
        }
        max_wealth = max(sum, max_wealth);
    }

    cout << max_wealth;

    return 0;
}