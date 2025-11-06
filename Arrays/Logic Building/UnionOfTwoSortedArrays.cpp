#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        int i= 0;
        int j = 0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){ if(ans.size()==0 || nums1[i]!=ans.back()){
                ans.push_back(nums1[i]);}
                i++;
            }
            else if(nums1[i]> nums2[j] ){if(ans.size()==0 || nums2[j]!=ans.back()){
                ans.push_back(nums2[j]);}
                j++;
            }
            else{
                if (ans.empty() || nums1[i] != ans.back())
                    ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        while(i<n){
            if((ans.size()==0 || nums1[i]!=ans.back())){
                ans.push_back(nums1[i]);
            }
            i++;
        }
        while(j<m){
            if((ans.size()==0 || nums2[j]!=ans.back())){
                ans.push_back(nums2[j]);
            }
            j++;
        }

        return ans;
    }
};