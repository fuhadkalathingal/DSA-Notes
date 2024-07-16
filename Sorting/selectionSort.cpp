#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = 0;
    for(int i = 0; i < n-1; i++) {
        min = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[min]) min = j;
        }
        swap(arr[i], arr[min]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}