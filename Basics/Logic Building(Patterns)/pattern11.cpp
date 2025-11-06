#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern11(int n) {
        bool flag = true;
        for(int i=1;i<=n;i++){
            bool temp = flag;
            for(int j=1;j<=i;j++){
                
                cout<<(int)temp<<" ";
                temp = !temp;
            }
            cout<<endl;
            flag = !flag;

        }
    }
};