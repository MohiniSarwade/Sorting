#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void maxCount(int a[],int n)
{
    map<int,int>mp;
    int count=1;
    for(int i=0;i<n;i++)
    {
        
        if(mp.find(a[i])!=mp.end())
            mp[a[i]]++;
        else 
            mp[a[i]]=count;
    }
    int max=0;
 
    for(int i=0;i<n;i++)
    {
        if(max<mp[a[i]])
            max=mp[a[i]];
    }
    cout<<max<<endl;
}
int main()
{
    int n=12;
    int a[n]={0,1,1,0,1,2,1,2,0,1,0,1};
     maxCount(a,n);
    return 0;
}
