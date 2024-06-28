#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[6] = {2, 3, 5, 7, 6, 1};

    int max = INT_MIN;
    int max2 = INT_MIN;

    for(int i = 0; i < 6; i++) {
        if(max < arr[i]) {
            max2 = max;
            max = arr[i];
        }else if(max != arr[i] && max2 < arr[i]) {
            max2 = arr[i];
        }
    }

    cout << max << " " << max2;

    return 0;
}