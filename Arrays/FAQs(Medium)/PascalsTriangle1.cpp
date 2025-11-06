#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int ncr(int n , int r){
        if(r > n-r) r = n-r;
        int sum = 1;
        for(int i=0; i<r; i++){
            sum = sum * (n - i);
            sum /= (i + 1);
        }
        return sum;
    }
    int pascalTriangleI(int r, int c) {
        return ncr(r-1 , c-1);
    }
};