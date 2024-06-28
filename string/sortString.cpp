#include <bits/stdc++.h>
using namespace std;

string countSort(string word) {
    vector<int> freq(26, 0);
    for(int i = 0; i < word.size(); i++) {
        int index = word[i]-'a';
        freq[index]++;
    }

    int j = 0;
    for(int i = 0; i < 26; i++) {
        while(freq[i]--) {
            word[j] = i + 'a';
            j++;
        }
    }

    return word;
}

int main() {

    string word;
    cin >> word;

    cout << countSort(word) << endl;

    return 0;
}