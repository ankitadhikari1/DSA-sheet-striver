#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			//your code goes here
            int n = str.size();
            if(n == 0) return "";
            if(n == 1) return str[0];

            sort(str.begin() , str.end());
            string ans = "";
            string s1 = str[0];
            string s2 = str[n-1];

            for(int i=0; i<s2.size(); i++){
                if(s1[i] == s2[i]) ans += s1[i];
                else break;
            }
            return ans;
		}
};