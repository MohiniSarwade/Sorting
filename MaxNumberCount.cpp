#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countMax(int a[],int n)
{
    int c=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i=0;i<n;i++)
        pq.push(make_pair(a[i],c++));
    int maxCount=0;
    int i=0;
    while(!pq.empty())
    {
        a[i++]=pq.top().first;
        pq.pop();
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    
    int count=1;
    int t;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
      
        if(count>maxCount)
        {
            maxCount=count;
            t=a[i];
        }
        if(a[i]!=a[i+1])
          count=1;
    }
    cout<<"Maximum occuring element is "<<t<<" with count "<<maxCount<<endl;
}
int main()
{
    int n=10;
    int a[n]={2,3,1,5,5,2,4,1,5,3};
    countMax(a,n);
}
