#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int largestDigit(int n) {
        if(n==0)return 0;
        int largest = INT_MIN;
        while(n){
            int r = n % 10;
            largest = max(largest , r);
            n/=10;
        }
        return largest;
    }
};