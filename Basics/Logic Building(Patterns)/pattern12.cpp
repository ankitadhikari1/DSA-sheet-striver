#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern12(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            for(int j=1;j<=(n*2-2*i);j++){
                cout<<" ";
            }
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }
};