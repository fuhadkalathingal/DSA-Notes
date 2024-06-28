#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[6] = {3, 1, 2, 4, 0, 6};
    int target = 6;

    for(int i = 0; i < 6; i++) {
        for(int j = i+1; j < 6; j++) {
            for(int k = j+1; k < 6; k++) {
                if(arr[i] + arr[j] + arr[k] == target) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }

    return 0;
}