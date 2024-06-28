#include <bits/stdc++.h>
using namespace std;

// string longestCommonPrefix(vector<string> &str) {
//     //sorting strings
//     sort(str.begin(), str.end());
//     string s1 = str[0];
//     string s2 = str[str.size()-1];
//     int i = 0, j = 0;
//     string ans = "";

//     while(i < s1.size() && s2.size()) {
//         if(s1[i] == s2[i]){
//             ans += s1[i];
//             i++; j++;
//         }else{
//             break;
//         }
//     }

//     return ans;
// }

string longestCommonPrefix(vector<string> &str) {
    //keeping first string as const and comparing it with all other strings
    string s1 = str[0];
    int ans_length = s1.size();

    for(int i = 1; i < str.size(); i++) {
        int j = 0;
        while(j < s1.size() && j < str[i].size() && s1[j] == str[i][j]) {
            j++;
        }
        ans_length = min(ans_length, j);
    }
    string ans = s1.substr(0, ans_length);
    return ans;
}

int main() {
    // the words are flower, flight, flask
    // the common longest starting part is 'fl' - prefix(starting)
    //eg :- ant, anti, anthem - ans = ant

    int n; cin >> n;
    vector<string> str(n);

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cout << "longest common prefix: " << longestCommonPrefix(str) << endl;

    return 0;
}