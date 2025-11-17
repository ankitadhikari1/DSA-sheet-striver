#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int startInd = -1, endInd = -1;
    int sum = 0;
    int maxSum = 0;
    int start = 0;
    for(int i=0;i<n;i++){
        if(sum==0){
            start = i;

        }

        sum+=arr[i];

        if(sum > maxSum){
            maxSum = sum;
            startInd = start;
            endInd = i;
        }

        if(sum<0){
            sum = 0;
        }
    }

    for(int i=startInd;i<=endInd;i++){
        cout<<arr[i]<<endl;
    }
}