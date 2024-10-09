// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/?envType=daily-question&envId=2024-10-09
// Minimum Add to Make Parentheses Valid

#include <bits/stdc++.h>
using namespace std;

int minAddToMakeValid(string s)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<char> st;
    int c = 0;
    for (char i : s)
    {
        if (i == '(')
        {
            st.push(i);
        }
        else
        {
            if (st.empty())
                c++;
            else
                st.pop();
        }
    }
    return c + st.size();
}

int main()
{
    string s = "())))((";
    cout << minAddToMakeValid(s);
}