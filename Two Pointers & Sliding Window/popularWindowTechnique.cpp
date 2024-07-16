#include <bits/stdc++.h>
using namespace std;

int main() {

    //this technique is used to find longest subarray/substring with <condition>
    //brute -> better -> optimal

    //Q1 - longest subarray with sum <= k
    vector<int> arr = {2, 5, 1, 7, 10};
    int k = 14, n = 5;

    //bruteforce - generate all subarrays = TC - O(n^2)
    // int max_leng = 0;
    // for(int i = 0; i < n; i++) {
    //     int sum = 0;
    //     for(int j = i; j < n; j++) {
    //         sum += arr[j];
    //         if(sum <= k) max_leng = max(max_leng, (j-i)+1);
    //         else if(sum > k) break;
    //     }
    // }

    // cout << max_leng;

    //better - using two pointers and sliding window = TC - O(2N)
    // int sum = 0, max_leng = 0;
    // int r = 0, l = 0;
    //two techniques of sliding window = 1. expansion(r), 2. shrink(l)
    // while(r < n) {
    //     sum += arr[r];

    //     while(sum > k) {
    //         sum -= arr[l];
    //         l++;
    //     }

    //     if(sum <= k) max_leng = max(max_leng, (r-l)+1);
    //     r++;
    // } 
    // cout << max_leng;

    //optimal solution(trim down shrinking) = TC - O(n)
    int sum = 0, max_leng = 0;
    int r = 0, l = 0;
    while(r < n) {
        sum += arr[r];

        if(sum > k) { //just shrink ones
            sum -= arr[l];
            l++;
        }

        if(sum <= k) max_leng = max(max_leng, (r-l)+1);
        r++;
    } 
    cout << max_leng;

    return 0;
}