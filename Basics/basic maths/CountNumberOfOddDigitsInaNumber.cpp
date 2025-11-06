#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool checkOdd(int n){
        return n&1;
    }

    int countOddDigit(int n) {
        int cnt = 0;
        while(n){
            int r = n%10;
            cnt+= checkOdd(r);
            n/=10;
        }
        return cnt;
    }
};