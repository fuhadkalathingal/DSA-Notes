#include <bits/stdc++.h>
using namespace std;

string decodeString(string s) {
    string result = "";

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ']') {
            result.push_back(s[i]);
        }else{
            //extract str from result
            string str = "";
            while(!result.empty() && result.back() != '[') {
                str.push_back(result.back());
                result.pop_back();
            }

            //reversing the str
            reverse(str.begin(), str.end());

            //remove last char from result which is [
            result.pop_back();

            //extract num from result
            string num = "";
            while(!result.empty() && (result.back() >= '0' && result.back() <= '9')) {
                num.push_back(result.back());
                result.pop_back();
            }

            reverse(num.begin(), num.end());

            //convert str to int
            int int_num = stoi(num);


            //inserting str in result int_num times
            while(int_num--) {
                result += str;
            }
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    //1[b] = b and 2[b] = bb and 1[b2[c]] = bcc

    cout << decodeString(s) << endl;

    return 0;
}