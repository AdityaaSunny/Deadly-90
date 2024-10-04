// leetcode.com/problems/teemo-attacking/description/
// 495- Teemo Attacking


#include <bits/stdc++.h>
using namespace std;


int findPoisonedDuration(vector<int> &timeSeries, int duration)
{
        int res = duration;
        for (int i = 0; i < timeSeries.size() - 1; i++)
        {
                res += min(duration, timeSeries[i + 1] - timeSeries[i]);
        }
        return res;
}

int main(){
        vector<int> arr={2,4,5,6,7,8};
        int k=2;

        cout<<findPoisonedDuration(arr,k);
        return 0;
}