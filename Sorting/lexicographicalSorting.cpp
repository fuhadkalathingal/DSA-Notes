#include <bits/stdc++.h>
using namespace std;


bool compareByLexicographical(int a, int b) {
    string s1 = to_string(a);
    string s2 = to_string(b);

    return s1 < s2;
}

int main() {

    vector<int> arr = {12, 5, 15};

    cout << "original array : " << endl;
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    sort(arr.begin(), arr.end(), compareByLexicographical);

    cout << "sorted array : " << endl;
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}