/*
Given an array of n elements that contains elements from 0 to n-1, 
with any of these numbers appearing any number of times find these repeating numbers.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[v[i]]++;
    }
    for(auto it : m)
    {
        if(it.second>1)
            cout<<it.first<<" ";
    }
    return 0;
}
