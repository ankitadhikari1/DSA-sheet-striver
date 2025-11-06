#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // last valid in nums1
        int j = n - 1;         // last in nums2
        int k = m + n - 1;     // fill position in nums1

        // While there are elements in nums2 to place
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        // If j < 0, remaining nums1[0..i] are already in place.
    }
};
