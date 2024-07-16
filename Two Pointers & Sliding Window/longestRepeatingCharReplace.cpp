#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "AABABBA"; int k = 2;
    int n = s.size(); int max_leng = 0;

    //pick the longest substring having same character eg - [A, A, A, A...]
    //can replace atmost k char 
    //changes = leng - max frequency

    //bruteforce - TC - O(n^2)
    // for(int i = 0; i < n; i++) {
    //     int hash[26] = {0};
    //     int maxf = 0;
    //     for(int j = i; j < n; j++) {
    //         hash[s[j]-'A']++;
    //         maxf = max(maxf, hash[s[j]-'A']);
    //         int changes = (j-i+1)-maxf;
    //         if(changes <= k) {
    //             max_leng = max(max_leng, j-i+1);
    //         }else{
    //             break;
    //         }
    //     }
    // }
    // cout << max_leng;

    //better - O(2N)*26
    // int l = 0, r = 0;
    // int maxf  = 0;
    // int hash[26] = {0};

    // while(r < n) {
    //     hash[s[r]-'A']++;
    //     maxf = max(maxf, hash[s[r]-'A']);
    //     while((r-l+1) - maxf > k) {
    //         hash[s[l]-'A']--;
    //         maxf = 0;
    //         for(int i = 0; i < 26; i++) maxf = max(maxf, hash[i]);
    //         l++;
    //     }
    //     if((r-l+1) - maxf <= k) {
    //         max_leng = max(max_leng, r-l+1);
    //     }
    //     r++;
    // }
    // cout << max_leng;

    //optimal - O(N)
    int r = 0, l = 0;
    int maxf = 0;
    int hash[26] = {0};

    while(r < n) {
        hash[s[r]-'A']++;
        maxf = max(maxf, hash[s[r]-'A']);
        if((r-l+1)-maxf > k) {
            hash[s[l]-'A']--;
            l++;
        }
        if((r-l+1)-maxf <= k) {
            max_leng = max(max_leng, (r-l+1));
        }
        r++;
    }
    cout << max_leng;

    return 0;
}