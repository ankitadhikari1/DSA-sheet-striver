#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int factorial(int n) {
        if(n==0)return 1;
        int mul = 1;
        while(n>0){
            mul*=n--;
        }
        return mul;
    }
};
