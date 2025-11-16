#include<bits/stdc++.h>
using namespace std;

class Solution {

private:
    string s;
    unordered_set<long long >res;

    void dfs(int ind , bool a , bool b , long long curr){
        if(ind == s.size()){
            if(b==true){
                res.insert(curr);
                
            }
            return;
        }
        int lim = a ? (s[ind]-'0'):9;
        for(int i=0;i<=lim;i++){
            bool flag = a && (i==(s[ind]-'0'));
            if(i==0){
                dfs(ind+1,flag,b,curr);
            }
            else{
                dfs(ind+1,flag , true, curr * 10 + i);
            }
        }
    }
    


    
public:
    long long countDistinct(long long n) {
        string s = to_string(n);
        int len = s.size();
        unsigned long long arr[20];
        arr[0] = 1;
        for (int i = 1; i <= len; ++i) arr[i] = arr[i-1] * 9ULL;

        unsigned long long ans = 0;
        for (int i = 1; i <len; i++) ans += arr[i];

        unsigned long long cnt = 0;
        for (int i = 0; i < len; i++) {
            int d = s[i] - '0';
            if (d == 0) break;
            cnt += (unsigned long long)(d - 1) * arr[len- 1 - i];
            if (i == len - 1) cnt += 1;
        }

        ans += cnt;
        return (long long)ans;
        
    }
};