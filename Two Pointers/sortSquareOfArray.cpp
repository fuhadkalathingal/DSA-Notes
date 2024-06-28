#include <bits/stdc++.h>
using namespace std;

void sortSquaredArr(vector<int> &arr) {
    int i = 0, j = arr.size()-1;

    vector<int> ans;

    while(i <= j) {
        if(abs(arr[i]) < abs(arr[j])) {
            ans.push_back(arr[j]*arr[j]);
            j--;
        }else{
            ans.push_back(arr[i]*arr[i]);
            i++;
        }
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() {

    vector<int> arr = {-10, -3, 4, 5, 6};

    sortSquaredArr(arr);

    return 0;
}