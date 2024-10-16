#include<bits/stdc++.h>
using namespace std;

int removedup(vector<int>& nums){
    set<int, greater<int>> st;

    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    for(auto i : st){
        nums.insert(nums.begin(),i);
    }

    return st.size();


}

int main(){
    vector<int> vec= {1,1,2};
    cout<<removedup(vec);
    return 0;
}