#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int *arr,int n)
{
    int p=0;int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i;
        while(arr[j-1]>key && j>=1)
        {
            arr[j]=arr[j-1];
            j--;
            p++;
        }
        arr[j]=key;
    }

    cout<<"Total swaps required "<<p<<endl;
}

int main()
{
    cout<<"Insertion sort "<<endl;
    int n=9;
    int arr[n]={10,4,43,5,57,91,45,9,7};
    InsertionSort(arr,n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
