//tc : O(nlogn)
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
    int k;
    cin>>k;
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[k-1];
    return 0;
}

//tc : O(n)

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
    int k;
    cin>>k;
    nth_element(v.begin(),v.begin()+k-1,v.end(),greater<int>());
    cout<<v[k-1];
    return 0;
}
