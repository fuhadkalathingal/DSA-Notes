#include <bits/stdc++.h>
using namespace std;

bool isTrue(vector<int> &arr)
{
    vector<int> freq(2001, 0);

    for (auto i : arr)
    {
        if (i >= 0)
        {
            freq[i]++;
        }
        else
        {
            freq[1000 * (i * -1)]++;
        }
    }

    vector<int> valid_freq;

    for (int i = 0; i < 2001; i++)
    {
        if (freq[i] > 0)
        {
            valid_freq.push_back(freq[i]);
        }
    }

    sort(valid_freq.begin(), valid_freq.end());

    for (auto i : valid_freq)
    {
        if (valid_freq[i] != valid_freq[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto i : arr)
    {
        cin >> i;
    }

    cout << isTrue(arr);

    return 0;
}