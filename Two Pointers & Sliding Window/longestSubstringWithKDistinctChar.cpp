#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "aaabbccd"; 
    int n = s.size();
    int k = 2; int max_leng = 0;

    //bruteforce - O(n^2)

    // for(int i = 0; i < n; i++) {
    //     set<int> st;
    //     for(int j = i; j < n; j++) {
    //         st.insert(s[j]);
    //         if(st.size() <= k) {
    //             max_leng = max(max_leng, j-i+1);
    //         }else{
    //             break;
    //         }
    //     }
    // }
    // cout << max_leng;

    //better - TC - O(2N)
    // int r = 0, l = 0;
    // map<int, int> mpp;

    // while(r < n) {
    //     mpp[s[r]]++;
    //     if(mpp.size() > k) {
    //         while(mpp.size() > k) {
    //             mpp[s[l]]--;
    //             if(mpp[s[l]] == 0) {
    //                 mpp.erase(s[l]);
    //             }
    //             l++;
    //         }
    //     }

    //     if(mpp.size() <= k) max_leng = max(max_leng, r-l+1);
    //     r++;
    // }
    // cout << max_leng;

    //optimal TC - O(N)
    int r = 0, l = 0;
    map<int, int> mpp;

    while(r <  n) {
        mpp[s[r]]++;
        if(mpp.size() > k) {
            mpp[s[l]]--;
            if(mpp[s[l]] == 0) mpp.erase(s[l]);
            l++;
        }

        if(mpp.size() <= k) max_leng = max(max_leng, r-l+1);
        r++;
    }
    cout << max_leng;

    return 0;
}