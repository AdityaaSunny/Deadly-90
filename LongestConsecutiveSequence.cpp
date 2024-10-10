#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int ind = 1;
    int cons = 1;
    if (nums.size() == 0)
    {
        return 0;
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (abs(nums[i + 1] - nums[i] == 1))
        {
            ind++;
            cons = max(cons, ind);
        }
        else if (nums[i + 1] - nums[i] == 0)
        {
            continue;
        }
        else
        {
            ind = 1;
        }
    }
    return cons;
}

int main()
{
    vector<int> arr= {1,2,3,3,4,100,200};
    cout << longestConsecutive(arr);
}
