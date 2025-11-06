#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

  int valid(int mid , int n , int m){
    int mul = 1;
    for(int i=0;i<n;i++){
       if(mul > m / mid){
        return 2;
      }
      mul = mul * mid;
     
    }

    if(mul == m)return 1;
    return 0;
  }


  int NthRoot(int N, int M) {
       int low = 1;
       int high = M;
       while(low<=high){
          int mid = low + (high-low)/2;
          int flag = valid(mid,N,M);
          if(flag == 1){
            return mid;
          }
          else if(flag == 0){
            low = mid + 1;
          }
          else{
            high = mid -1;
          }
       }

       return -1;

    }
};
