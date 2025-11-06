#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:

        static bool cmp(const pair<int, char> &a, const pair<int, char> &b){
                if(a.first==b.first){
                    return a.second<b.second;
                }
                return a.first>b.first;
        }


		vector<char> frequencySort(string& s){
			map<char,int>mp;
            for(auto & it : s){
                mp[it]++;
            }
        
            vector<pair<char,int>>temp;
            for(auto & it : mp){
                temp.push_back({it.second,it.first});
            }

            sort(temp.begin(),temp.end(),cmp);

            vector<char>ans;
            for(auto & it : temp){
                ans.push_back(it.second);
            }

            return ans;


		}
};