#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n)
{
    bool swap=true;
    int p=0;
    for(int pass=n-1;pass>=0 && swap;pass--)
    {
        swap=false;
        for(int i=0;i<=pass-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
                swap=true;
                p++;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"Total swaps required "<<p<<endl;
}

int main()
{
    cout<<"Bubble sort "<<endl;
    int n=9;
    int arr[n]={10,4,43,5,57,91,45,9,7};
    bubbleSort(arr,n);
    
    return 0;
}
