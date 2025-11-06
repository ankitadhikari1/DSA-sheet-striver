#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isArmstrong(int n) {
        int s = log10(n)+1;
        int temp = n;
        int sum = 0;
        while(temp){
            int r = temp%10;
            sum +=pow(r,s);
            temp/=10;
        }
        return sum == n;
    }
};