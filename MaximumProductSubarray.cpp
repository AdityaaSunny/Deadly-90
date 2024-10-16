#include <bits/stdc++.h>
using namespace std;

int maxsub(vector<int> &nums)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int maxPr = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int product = 1;
        for (int j = i; j < nums.size(); j++)
        {
            product *= nums[j];
            maxPr = max(maxPr, product);
        }
    }
    return maxPr;
}

int main()
{
    vector<int> vec = {2, 3, -2, 4};
    cout << maxsub(vec);
}