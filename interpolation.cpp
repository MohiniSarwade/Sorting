#include<bits/stdc++.h>
using namespace std;

int InterSearch(int arr[],int low,int high,int x)
{
   int mid;
   while(low<=high &&x>=arr[low] && x<=arr[high])
   {
       if (low==high) 
        { 
            if (arr[low] == x) return low; 
            return -1; 
        } 
       mid=low+(((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]));;
       if(arr[mid]==x)
            return mid;
        else if (arr[mid]>x)
            high=mid-1;
        else
             low=mid+1;
   }
   return -1;
}

int main()
{
    cout<<"Interpolation Search"<<endl;
    int n=15;
    int arr[n]={10, 12, 13, 16, 18, 19, 20, 21,22, 23, 24, 33, 35, 42, 47};
    int x=InterSearch(arr,0,n-1,24);
    if(x==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at position "<<x<<endl;

    return 0;
}
