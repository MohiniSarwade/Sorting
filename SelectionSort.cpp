#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n)
{
    int p=0;int min,j;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
                min=j;
        }
        if(min!=i)
        {
            p++;
            //cout<<arr[min]<<" "<<arr[i]<<endl;
            int tmp=arr[min];
            arr[min]=arr[i];
            arr[i]=tmp;
            
        }
        
    }
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"Total swaps required "<<p<<endl;
}

int main()
{
    cout<<"Selection sort "<<endl;
    int n=9;
    int arr[n]={10,4,43,5,57,91,45,9,7};
    SelectionSort(arr,n);
    
    return 0;
}
