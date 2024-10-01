#include <bits/stdc++.h>
using namespace std;
bool poweroftwo(int n)
{
    if (n > 0 && (n & (n - 1)) == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (poweroftwo(n) == false)
    {
        cout << " is not a power of two";
    }
    else
    {
        cout << " is a power of two ";
    }
    return 0;
}