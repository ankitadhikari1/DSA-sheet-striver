#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int i = 0;
        int j = 0;

        vector<int>ans;

        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums2[j]<nums1[i]){
                j++;
            }
            else {
                
                    ans.push_back(nums1[i]);
                
                i++;
                j++;
            }
        }

        return ans;
    }
};