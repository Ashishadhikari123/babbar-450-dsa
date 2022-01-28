#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];

    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i+=1;
            j+=1;
        }
        else
        if(arr1[i]<arr2[j])
            i+=1;
        else
            j+=1;
    }
    return 0;
}
