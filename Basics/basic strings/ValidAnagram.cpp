#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            return s==t;

		}
};