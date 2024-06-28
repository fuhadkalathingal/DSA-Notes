#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[6] = {1, 1, 2, 3, 4, 5};
    int arr2[6] = {2, 3, 4, 4, 5, 6};

    //brute force - solution
    // set<int> st;

    // for(int i = 0; i < 6; i++) {
    //     st.insert(arr[i]);
    // }

    // for(int i = 0; i < 6; i++) {
    //     st.insert(arr2[i]);
    // }

    // int n = st.size();
    // vector<int> ans;
    // for(auto i : st) {
    //     ans.push_back(i);
    // }

    // for(auto i : ans) {
    //     cout << i << " ";
    // }

    //optimal - solution
    int i = 0, j = 0;
    vector<int> ans;

    while(i < 6 && j < 6) {
        if(arr[i] <= arr2[j]) {
            if(ans.size() == 0 || ans.back() != arr[i]) {
                ans.push_back(arr[i]);
            }
            i++;
        }else{
            if(ans.size() == 0 || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j < 6) {
        if(ans.size() == 0 || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
        }
        j++;
    }

    while(i < 6) {
        if(ans.size() == 0 || ans.back() != arr[i]) {
                ans.push_back(arr[i]);
        }
        i++;
    }

    for(auto i : ans) {
        cout << i << " ";
    }

    return 0;
}