#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int floorSqrt(int n)  {
      int low = 1;
      int high = n;
      while(low<=high){
        int mid = low + (high - low)/2;
        if(mid  == n / mid){
          return mid;
        }
        else if(mid < n / mid){
          low = mid + 1;
        }
        else{
          high = mid - 1;
        }

      }
      return high;
    }
};