#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:

        bool check(int i , int n){
            
            if(i>=n) return true;
            int flag = n%i==0;
            if(flag)return false;
            return check(i+1,n);
        }

		bool checkPrime(int num){
            if(num==1)return false;
            if(num==2)return true;
			int i = 2;
            bool ans = check(i,num);
            return ans;
		}
};