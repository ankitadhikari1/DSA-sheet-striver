#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void func(int n , string s , vector<string>&ans, bool flag){
        if(n==0){
            ans.push_back(s);
            return;
        }

        func(n-1,s+'0',ans,false);
        if(!flag){
            func(n-1,s+'1',ans,true);
        }

    }


    vector<string> generateBinaryStrings(int n) {
        vector<string>ans;
        string s = "";
        func(n,s,ans,false);
        return ans;
    }
};
