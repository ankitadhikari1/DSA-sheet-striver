#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
    	int arr1[256]={0};
        int arr2[256]={0};
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            if(arr1[s[i]]!=arr2[t[i]]){
                return false;
            }
            arr1[s[i]] = i + 1;
            arr2[t[i]] = i + 1;
        }

        return true;


    }
};