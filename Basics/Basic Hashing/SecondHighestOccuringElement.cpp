
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &it : nums){
            mp[it]++;
        }
        int firstH = -1;
        int secondH = -1;
        int firstC = -1;
        int secondC = -1;

        for(auto &it : mp){
            if(it.second>firstC){
               
                secondH = firstH;
                secondC = firstC;
                firstC = it.second;
                firstH = it.first;
            }
            else if(it.second==firstC){
                firstH = min(firstH,it.first);
            }
            else if(it.second>secondC){
                secondC = it.second;
                secondH = it.first;
            }
            else if(it.second==secondC){
                secondH = min(secondH,it.first);
            }
        }

        return secondH;
    }
};