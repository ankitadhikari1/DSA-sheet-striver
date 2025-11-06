#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    vector<int> generateRow(int n){
        vector<int>temp;
        temp.push_back(1);
        int ans = 1;
        for(int i=0;i<n;i++){
            ans = ans * (n-i);
            ans = ans / (i+1);
            temp.push_back(ans);
        }

        return temp;


    }


    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i=1;i<n;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};