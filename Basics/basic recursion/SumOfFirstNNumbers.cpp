#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:


        int func(int n){
            if(n==1)return 1;
            return n + func(n-1);
        }

		int NnumbersSum(int N){
			int sum = func(N);
            return sum;
		}
};