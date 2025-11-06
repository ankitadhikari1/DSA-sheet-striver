#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    int ncr(int n, int r){
        if(r>n-r)r=n-r;
        int ans = 1;
        for(int i=0;i<r;i++){
            ans = ans * (n-i);
            ans = ans / (i+1);
        }

        return ans;
    }

    vector<int> pascalTriangleII(int r) {
        vector<int>ans(r);
        for(int i=0;i<r;i++){
            ans[i] = ncr(r-1,i);
        }
        return ans;
    }
};