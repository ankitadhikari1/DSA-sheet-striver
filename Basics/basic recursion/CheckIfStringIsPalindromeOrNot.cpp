#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
        bool check(int ind , string& s){
            int n = s.size();
            if(n == 1) return true;
            
            if(ind <= n - 1 - ind){
                if(s[ind] != s[n - 1 - ind]){
                    return false;
                }
            }
            else return true;
            bool ans = check(ind + 1 , s);
            return ans;
        }
		bool palindromeCheck(string& s){
			//your code goes here
            bool ans = check(0 , s);
            return ans;
		}
};