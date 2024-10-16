#include<bits/stdc++.h>
using namespace std;


int secondlargest(string& s){
    int a=-1;
    int b=-1;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 &&s[i]<58){
            int k= s[i]-'0';
            if(k==a || k==b) continue;

            if(k>a) b=a , a=k;
            else if(k>b) b=k;
        }
    }
    return b;
}

int main(){
    string s="abc1111";

    cout<<secondlargest(s);
}


