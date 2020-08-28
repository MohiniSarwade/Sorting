#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countSort(int a[], int n)
{
    int count[3]={0};
   
    int out[n];
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(int i=1;i<3;i++)
        count[i]+=count[i-1];
    
    for(int i=n-1;i>=0;i--)
    {
        out[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    
    for(int i=0;i<n;i++)
        a[i]=out[i];
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n=12;
    int a[n]={0,1,1,0,1,2,1,2,0,0,0,1};
    countSort(a,n);
    
    return 0;
}
