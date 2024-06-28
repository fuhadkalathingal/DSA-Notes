#include <bits/stdc++.h>
using namespace std;

// void sortZerosAndOnes(vector<int> &arr) {
//     int zero_count = 0;
//     for(int ele : arr) {
//         if(ele == 0) {
//             zero_count++;
//         }
//     }

//     for(int i = 0; i < arr.size(); i++) {
//         if(i < zero_count) arr[i] = 0;
//         else arr[i] = 1;
//     }
// }

void sort(vector<int> &arr) {
    int i = 0, j = arr.size()-1;

    while(i < j) {
        if(arr[i] == 1 && arr[j] == 0) {
            arr[i++] = 0;
            arr[j--] = 1;
        }

        if(arr[i] == 0) {
            i++;
        }

        if(arr[j] == 1) {
            j--;
        }
    }

    return;
}

int main() {

    vector<int> arr = {1, 1, 0, 0, 1, 0, 1, 0};

    // sortZerosAndOnes(arr);

    sort(arr);

    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}