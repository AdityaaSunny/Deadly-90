// https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/?envType=daily-question&envId=2024-10-07

// Minimum String Length After Removing Substrings

#include <bits/stdc++.h>
using namespace std;

int minLength(string s)
{
    stack<char> charStack;
    for (char currentChar : s)
    {
        if (!charStack.empty() &&
            ((charStack.top() == 'A' && currentChar == 'B') ||
             (charStack.top() == 'C' && currentChar == 'D')))
        {
            charStack.pop();
        }
        else
        {
            charStack.push(currentChar);
        }
    }
    return charStack.size();
}

int main(){
    string s= "ABCDER";
    cout<<minLength(s);

}