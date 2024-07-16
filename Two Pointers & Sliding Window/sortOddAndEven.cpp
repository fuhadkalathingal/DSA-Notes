#include <bits/stdc++.h>
using namespace std;

void sortEvenOdd(vector<int> &arr) {
    int i = 0, j = arr.size()-1;

    while(i < j) {
        if(arr[i] % 2 == 0 && arr[j] % 2 == 1) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        if(arr[i] % 2 == 1) i++;
        if(arr[j] % 2 == 0) j--;
    }

    return;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    sortEvenOdd(arr);

    for(auto i : arr) {
        cout << i << " ";
    }

    return 0;
}