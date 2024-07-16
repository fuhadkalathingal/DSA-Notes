#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int n = 9, k = 4;

    //you can pick consecutive elements from both front and back but not from middle
    int lsum = 0, rsum = 0, maxSum = 0;
    for(int i = 0; i < k; i++) lsum += arr[i];
    maxSum = lsum;

    int rIdx = n-1;

    for(int i = k-1; i >= 0; i--) {
        lsum -= arr[i];
        rsum += arr[rIdx];
        rIdx--;

        maxSum = max(maxSum, lsum+rsum);
    } 

    cout << maxSum;

    return 0;
}