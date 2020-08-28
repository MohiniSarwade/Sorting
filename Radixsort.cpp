#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int a[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << a[i] << " "; 
	cout<<endl;
} 

void countSort(int a[], int n, int exp)
{
    int b[10]={0};
     
    int output[n],i;
    
    for(i=0;i<n;i++)
        b[(a[i]/exp)%10]++;
   
    for(i=1;i<10;i++)
        b[i]=b[i]+b[i-1];
    
    for(i=n-1;i>=0;i--)
    {
        output[b[(a[i]/exp)%10]-1]=a[i];
        b[(a[i]/exp)%10]--;
    }
     
    for(i=0;i<n;i++)
        a[i]=output[i];
    
     //print(a, n);    
}
void radixSort(int a[], int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    } 
    
    for(int exp=1;max/exp>0;exp *=10)
    {
        countSort(a,n,exp);
    }
   
}

int main()
{
    int n=8;
    int a[n]={170,45,75,90,802,24,2,66};
    cout<<"radix sort"<<endl;
    radixSort(a,n);
    print(a, n);
    return 0;
}
