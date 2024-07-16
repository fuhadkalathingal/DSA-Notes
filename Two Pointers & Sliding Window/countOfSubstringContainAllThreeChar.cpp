#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "abcabc"; int n = s.size();
    int count =  0;

    //bruteforce - TC - O(n^2)
    // for(int i = 0; i < n; i++) {
    //     int hash[3] = {0};
    //     for(int j = i; j < n; j++) {
    //         hash[s[j]-'a'] = 1;
    //         if(hash[0]+hash[1]+hash[2] == 3) {
    //             count++;
    //         }
    //     }
    // }
    // cout << count;

    //better bruteforce
    // for(int i = 0; i < n; i++) {
    //     int hash[3] = {0};
    //     for(int j = i; j < n; j++) {
    //         hash[s[j]-'a'] = 1;
    //         if(hash[0]+hash[1]+hash[2] == 3) {
    //             count += n-j;
    //             break;
    //         }
    //     }
    // }
    // cout << count;

    //optimal
    //selecting minimum window's first index + 1 = substring count

    vector<int> last_seen(3, -1);

    for(int i = 0; i < n; i++) {
        last_seen[s[i]-'a'] = i;
        if(last_seen[0] != -1 && last_seen[1] != -1 && last_seen[2] != -1) {
            count += (1 + min({last_seen[0], last_seen[1], last_seen[2]}));
        }
    }
    cout << count;

    return 0;
}