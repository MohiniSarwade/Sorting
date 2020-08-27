#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countSort(int t[],int n)
{
    int k=100;
    int b[n+1],count[k];
    for(int i=0;i<k;i++)
        count[i]=0;
        
    for(int i=0;i<n;i++)
        count[t[i]]++;
        
    for(int i=1;i<k;i++)
        count[i]=count[i]+count[i-1];
        
    for(int i=0;i<n;i++)
    {
        b[count[t[i]]-1]=t[i];
        count[t[i]]--;
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
}

int main()
{
    cout<<"Count Sort"<<endl;
    int n=9;
    int t[n]={10,4,43,5,57,91,45,9,7};
    countSort(t,n);
    return 0;
}

