#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> garden = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
    //each index represents trees and the value represents the fruits
    //one can store only same value if 3 is apple and then the array will be [3, 3, 3..]
    //collect fruits into two baskets contigously(max length subarray with at most 2 types of fruits)

    int n = garden.size();
    int max_leng = 0;

    //bruteforce = TC - O(n^2), SC - O(3) ~ constant

    // for(int i = 0; i < n; i++) {
    //     set<int> st;
    //     for(int j = i; j < n; j++) {
    //         st.insert(garden[j]);
    //         if(st.size() <= 2) {
    //             max_leng = max(max_leng, j-i+1);
    //         }else{
    //             break;
    //         }
    //     }
    // }

    //better - TC - O(2n), SC - O(3) ~ O(1)
    // int r = 0, l = 0;
    // map<int, int> mpp;
    
    // while(r < n) {
    //     mpp[garden[r]]++;
    //     if(mpp.size() > 2) {
    //         while(mpp.size() > 2) {
    //             mpp[garden[l]]--;
    //             if(mpp[garden[l]] == 0) {
    //                 mpp.erase(mpp[garden[l]]);
    //             }
    //             l++;
    //         }
    //     }

    //     if(mpp.size() <= 2) {
    //         max_leng = max(max_leng, r-l+1);
    //     }
    //     r++;
    // }
    // cout << max_leng;

    //optimal - TC - O(n)

    int r = 0, l = 0;
    map<int, int> mpp;

    while(r < n) {
        mpp[garden[r]]++;
        if(mpp.size() > 2) {
            mpp[garden[l]]--;
            if(mpp[garden[l]] == 0) {
                mpp.erase(garden[l]);
            }
            l++;
        }

        if(mpp.size() <= 2) {
            max_leng = max(max_leng, r-l+1);
        }
        r++;
    }
    cout << max_leng;

    return 0;
}