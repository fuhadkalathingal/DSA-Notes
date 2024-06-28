#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int employees = 0;

    for(int i = 0; i < n; i++) {
        if(target <= arr[i]) {
            employees++;
        }
    }

    cout << employees;
}