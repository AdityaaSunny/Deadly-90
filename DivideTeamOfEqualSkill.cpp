// 2491. Divide Players Into Teams of Equal Skill
//https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/description/?envType=daily-question&envId=2024-10-04

#include <bits/stdc++.h>
using namespace std;

long long dividePlayers(vector<int>& skill) {
    sort(skill.begin(),skill.end());
    int n= skill.size();
    int sum= skill[0]+skill[n-1];
    long long res=0;
    for(int i=0;i<n/2;i++){
        if(skill[i]+skill[n-i-1]!=sum){
            return -1;
        }
        res+=skill[i]*skill[n-i-1];
    }
    return res;
}

int main(){
    vector<int> arr={3,2,5,1,3,4};
    cout<<dividePlayers(arr);
}