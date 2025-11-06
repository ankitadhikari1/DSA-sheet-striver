#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern18(int n) {
        for(int i=1;i<=n;i++){
            for(int j=n-i+1;j<=n;j++){
                cout<<(char)('A'+j-1)<<" ";
            }
            cout<<endl;
        }
    }
};