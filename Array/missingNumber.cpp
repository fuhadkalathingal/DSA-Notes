#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1, 2, 4, 5};
    int hash[6] = {0};

    for(int i = 0; i < 4; i++) {
        hash[arr[i]] = 1;
    }

    for(int i = 1; i < 5; i++) {
        if(hash[i] == 0) cout << i;
    }

    return 0;
}