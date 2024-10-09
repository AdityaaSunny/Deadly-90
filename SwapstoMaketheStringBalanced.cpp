// https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description/?envType=daily-question&envId=2024-10-08

// 1963. Minimum Number of Swaps to Make the String Balanced
#include <bits/stdc++.h>
using namespace std;
int minSwaps(string s)
{
    stack<char> st;

    for (auto i : s)
    {
        if (i == '[')
        {
            st.push(i);
        }
        else
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
        }
    }
    return (st.size() + 1) / 2;
}

int main()
{
    string s = "]]][[[";
    cout << minSwaps(s);
}