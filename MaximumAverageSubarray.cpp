#include<bits/stdc++.h>
using namespace std;


double maxaverage(vector<int>&nums,int k){
    int s=0;
    int e=k-1;
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=s;i<=e;i++){
        currSum+=nums[i];
    }
    maxSum=currSum;
    e++;
    while (e<nums.size())
    {
        currSum+=nums[e++];
        currSum-=nums[s++];
        maxSum=max(currSum,maxSum);
    }
    return maxSum/(double)k;
    
}

int main(){
    vector<int> nums={1,12,-5,-6,50,3};
    int k=4;

    cout<<maxaverage(nums,k);
}