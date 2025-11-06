#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        int ind = -1;
        int size = s.size();
        for(int i=size-1;i>=0;i--){
            if((s[i]-'0')%2){
               ind = i;
               break;
            }
        }

        int i=0;
        while(i<=ind && s[i]=='0'){
            i++;
        }

        return s.substr(i,ind-i+1);

    }
};