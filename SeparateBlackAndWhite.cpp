#include <bits/stdc++.h>
using namespace std;

long long minimumSteps(string s)
{
    int black = 0;
    long long swap = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            swap += black;
        }
        else
        {
            black++;
        }
    }
    return swap;
}

int main(){
    string str="111000110101010010101001";
    cout<<minimumSteps(str);
    
}