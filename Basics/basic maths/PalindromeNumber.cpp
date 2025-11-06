#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(int n) {
        int num = 0;
        int temp = n;
        while(n){
            int r = n%10;
            num = (num*10)+r;
            n/=10;
        }
        return num==temp;
    }
};