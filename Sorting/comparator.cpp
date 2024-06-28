#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n%10;
        n /= 10;
    }

    return sum;
}

bool compareBySum(int a, int b) {
    return digitSum(a) < digitSum(b);
}

int main() {

    vector<int> arr = {123, 7, 45, 12};

    cout << "original array : " << endl;
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    sort(arr.begin(), arr.end(), compareBySum);

    cout << "sorted array : " << endl;
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}