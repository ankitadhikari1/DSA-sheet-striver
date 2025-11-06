#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        bool flag = true;
        if(n==1)return true;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                flag = false;
                break;
            }
        }
        return flag;
    }
};
