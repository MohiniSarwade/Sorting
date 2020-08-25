#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ShellSort(int *arr, int n)
{
    int j;
    int p=0;
    for(int gap=n/2;gap>0;gap/=2)
    {
        for(int i=gap;i<n;i+=1)
        {
            int min=arr[i];
            j=i;
            while(arr[j-gap]>min && j>=gap)
            {
                arr[j]=arr[j-gap];
                j-=gap;
                p++;
            }
            arr[j]=min;
        }
    }
    cout<<"Number of comparisions "<<p<<endl;
}

int main()
{
    cout<<"Shell sort "<<endl;
    int n=9;
    int arr[n]={10,4,43,5,57,91,45,9,7};
    ShellSort(arr,n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
