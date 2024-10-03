//https://leetcode.com/problems/single-number/description/
        // 136-Single Number

#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& arr) {
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {4, 1, 2, 1, 2};

    cout<<singleNumber(nums);
    
}