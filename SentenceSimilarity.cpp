

// http://leetcode.com/problems/sentence-similarity-iii/description/?envType=daily-question&envId=2024-10-06

// 1813. Sentence Similarity III

#include <bits/stdc++.h>
using namespace std;

bool areSentencesSimilar(string s1, string s2)
{
    if (s1.length() < s2.length())
    {
        swap(s1, s2);
    }

    vector<string> vec1, vec2;
    stringstream ss1(s1);
    string token;
    while (ss1 >> token)
    {
        vec1.push_back(token);
    }
    stringstream ss2(s2);
    while (ss2 >> token)
    {
        vec2.push_back(token);
    }

    int i = 0, j = vec1.size() - 1;

    int k = 0, l = vec2.size() - 1;

    while (k < vec2.size() && i < vec1.size() && vec2[k] == vec1[i])
    {
        k++;
        i++;
    }
    while (l >= k && vec2[l] == vec1[j])
    {
        j--;
        l--;
    }
    return l < k;
}

int main(){
    string s1 = "My  name is Aditya";
    string s2= " My Aditya";
    if(areSentencesSimilar(s1,s2)==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}