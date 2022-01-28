#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size1,size2;
    cin>>size1>>size2;
    int arr1[size1],arr2[size2];
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    set<int>s;
    for(int i=0;i<size1;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<size2;i++)
    {
        s.insert(arr2[i]);
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
