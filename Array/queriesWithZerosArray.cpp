#include <bits/stdc++.h>
using namespace std;

void doQuery(vector<int> &arr, int q)
{
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        arr[l] += x;
        if (r + 1 < arr.size())
            arr[r + 1] -= x;
    }

    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        arr[i] = sum;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    vector<int> arr(n, 0);

    cout << "enter number of queries: " << endl;
    int q;
    cin >> q;

    doQuery(arr, q);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}