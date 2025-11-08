#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }

        vector<int> fwd(n, 1);
        for (int i = 1; i < n; ++i) {
            if (nums[i] >= nums[i - 1]) {
                fwd[i] = fwd[i - 1] + 1;
            }
        }

        vector<int> bwd(n, 1);
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] <= nums[i + 1]) {
                bwd[i] = bwd[i + 1] + 1;
            }
        }
        
        int mx = 0;
        for (auto &it : fwd) {
            mx = max(mx, it);
        }

        for (int i = 0; i < n; ++i) {
            
            if (i > 0 && i < n - 1) {
                if (nums[i - 1] <= nums[i + 1]) {
                    mx = max(mx, fwd[i - 1] + 1 + bwd[i + 1]);
                }
            }
            
            if (i > 0) {
                mx = max(mx, fwd[i - 1] + 1);
            }
            
            if (i < n - 1) {
                mx = max(mx, 1 + bwd[i + 1]);
            }
        }

        return mx;
    }
};