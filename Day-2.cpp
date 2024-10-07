// https://leetcode.com/problems/divide-two-integers/description/
//  29-Divide Two Integers

#include <bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor)
{
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    long long int ans = dividend / divisor;
    if (ans > INT_MAX)
        return INT_MAX;
    if (ans < INT_MIN)
        return INT_MIN;
    return ans;
}
int main(){
    int a = 10;
    int b = 3;
    cout<<divide(a,b);
}