#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int partiotion(int *t,int l, int h,int &count)
{
    int left=l;
    int right=h;
    int pivot=t[l];
    while(left<right)
    {
        while(t[left]<pivot)
            left++;
        while(t[right]>pivot)
            right--;
        if(right>left)
         {
             swap(t[right],t[left]);
             count++;
         }
    }
    swap(pivot,t[right]);
    count++;
    return right;
}
int R_partiotion(int *t,int l,int h,int &count)
{
    srand(time(NULL));
    int random=l+ rand()%(h-l);
    swap(t[random],t[l]);
  
    return partiotion(t,l,h,count);
}

void quickSort(int *t,int l,int h,int &count)
{
   
    if(l<h)
    {
        int p=R_partiotion(t,l,h,count);
        quickSort(t,l,p-1,count);
        quickSort(t,p+1,h,count);
    }
   
}

int main()
{
    cout<<"Quick Sort"<<endl;
    int n=6;
    int t[n]={10, 7, 8, 9, 1, 5};
    int count;
    quickSort(t,0,n-1,count);
    
    for(int i=0;i<n;i++)
        cout<<t[i]<<" ";
    cout<<endl<<"Total Number of swaps "<<count<<endl;
    
}
