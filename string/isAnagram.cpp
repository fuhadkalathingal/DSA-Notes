#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    vector<int> freq(26, 0);

    //if length are different return false
    if(s.size() != t.size()) return false;

    for(int i = 0; i < s.size(); i++) {
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) return false;
    }

    return true;
}

int main() {

    //Anagram - pots and stop, silent and listen
    //Angram are strings having same frequency of characters

    string s, t;
    cin >> s >> t;

   if(isAnagram(s, t)) {
    cout << "Strings are anagrams";
   }else{
    cout << "Strings are not anagrams";
   }

    return 0;
}