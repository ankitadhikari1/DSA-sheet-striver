#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPrime(int n) {
        if(n<=1)return false;
        bool flag = false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag = true;
                break;
            }
        }
        if(flag){
            return 0;
        }
        return 1;

    }
};