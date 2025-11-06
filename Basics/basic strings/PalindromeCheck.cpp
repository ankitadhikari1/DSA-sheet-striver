#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			string temp = s;
            reverse(s.begin(),s.end());
            return s==temp;
		}
};