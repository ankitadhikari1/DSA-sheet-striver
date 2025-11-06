#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int num = 0;
        while(n){
            int r = n%10;
            num = (num*10)+r;
            n/=10;
        }
        return num;
    }
};