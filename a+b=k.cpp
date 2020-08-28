#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int l,int r, int k)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==k)
            return 1;
        if(k>a[mid])
            return BinarySearch(a,mid+1,r,k);
        else
            return BinarySearch(a,l,mid-1,k);
    }
    return 0;
}
int IsK(int a[], int b[], int n,int k)
{
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int x=k-b[i];
        if(BinarySearch(a,0,n-1,x))
            return 1;
    }
    return 0;
}


int main()
{
    int n=8;
    int a[n]={170,45,75,90,802,24,2,66};
    int b[n]={5,7,8,1,99,11,342,88};
    int k=86;
    if(IsK(a,b,n,k))
        cout<<"There exist elements with sum "<<k<<endl;
    else
        cout<<"No elements with sum "<<k<<" exist"<<endl;
    return 0;
}
