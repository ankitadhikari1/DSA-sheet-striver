#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int GCD(int n1,int n2) {
        if(n1==0)return n2;
        return GCD(n2%n1,n1);
    }
};