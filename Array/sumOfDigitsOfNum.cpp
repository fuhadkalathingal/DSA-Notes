#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin >> number;

    int sum = 0;
    for(int rem = number; rem > 0; rem /= 10) {
        sum += rem % 10;
    }

    cout << sum;

    return 0;
}