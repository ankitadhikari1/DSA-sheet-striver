#include<bits/stdc++.h>
using namespace std;


class Solution{	
public:

    void rev(int ind, vector<char>&s){
        int n = s.size();
        if(ind * 2 >= n-1 )return;
        swap(s[ind],s[n-ind-1]);
        rev(ind+1,s);
    }


	vector<char> reverseString(vector<char>& s){
		int ind = 0;
        rev(ind,s);
        return s;
	}
};