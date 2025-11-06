#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern10(int n) {
        for(int i=1;i<=(2*n-1);i++){
            int limit = i;
            if(i>n){
                limit = n-(i%n);
            }
            for(int j=1;j<=limit;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};