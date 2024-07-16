#include <bits/stdc++.h>
using namespace std;

int main() {
    //unique means no repeation
    string s = "cadbzab";
    int n = s.size();
    int max_leng = 0, leng = 0;

    //bruteforce - TC - O(n^2), SC - O(256)
    // for(int i = 0; i < n; i++) {
    //     int hash[256] = {0};
    //     for(int j = i; j < n; j++) {
    //         if(hash[s[j]] == 1) break;
    //         leng = (j-i)+1;
    //         max_leng = max(leng, max_leng);
    //         hash[s[j]] = 1;
    //     }
    // }

    // cout << max_leng;

    //optimal - TC - O(n), SC - O(256) ~ constant
    vector<int> hash(256, -1);
    int l = 0, r = 0;

    while(r < n) {
        if(hash[s[r]] != -1) {
            if(hash[s[r]] >= l) {
                l = hash[s[r]]+1;
            }
        }
        leng = r-l+1;
        max_leng = max(leng, max_leng);
        hash[s[r]] = r;
        r++;
    }

    cout << max_leng;

    return 0;
}