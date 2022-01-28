#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count0=0,count1=0;
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(x==0)
            count0+=1;
        else
        if(x==1)
            count1+=1;
    }
    int count2=n-(count0+count1);
    for(int i=1;i<=count0;i++)
    {
        cout<<"0 ";
    }
    for(int i=1;i<=count1;i++)
    {
        cout<<"1 ";
    }
    for(int i=1;i<=count2;i++)
    {
        cout<<"2 ";
    }
    return 0;
}
