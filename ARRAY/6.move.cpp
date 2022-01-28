//Method 1 using extra space 


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
    vector<int>temp;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<0)
            temp.push_back(v[i]);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=0)
            temp.push_back(v[i]);
    }
    for(auto x : temp)
        cout<<x<<" ";
    return 0;
}


//Method 2 using partition process of quick sort

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
    int i,j=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<0)
        {
            if(i!=j)
                swap(v[j],v[i]);
            j+=1;
        }
    }
    for(int x : v)
        cout<<x<<" ";
    return 0;
}
