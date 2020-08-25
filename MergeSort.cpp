#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int merge(int *a,int l,int m,int h)
{
	int i=l,j=m+1,k=0,count;
	int b[10];
	while(i<=m && j<=h)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
		    	count+=m-i+1;
        b[k++]=a[j++];
		
		}
	}
	while(i<=m)
	{
		b[k++]=a[i++];
	}
	while(j<=h)
	{
		
		b[k++]=a[j++];
	}
	
	for(i=l,k=0;i<=h;i++,k++)
	{
		a[i]=b[k];
	}
return count;
}
int mergeSort(int *a, int l,int r)
{
    int inv;
    if(l<r)
    {
    int mid=(l+r)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
    inv=merge(a,l,mid,r);
    }
    return inv;
}
int main()
{
    cout<<"Merge sort "<<endl;
    int n=9;
    int a[n]={10,4,43,5,57,91,45,9,7};
    
    int r=mergeSort(a,0,n-1);
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Total number of inversions "<<r<<endl;
    return 0;
}
