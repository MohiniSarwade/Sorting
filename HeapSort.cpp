#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Heap
{
  public:
  
  int *arr;
  int count, capacity;
  Heap(int x,int t[])
  {
      capacity=x;
      count=0;
      arr=new int[capacity];
      for(int i=0;i<capacity;i++)
       { arr[i]=t[i];
            count++;
       }
  }
};

void percolateDown(Heap *h,int n,int i)
{
    int l=2*i+1;
    int r=2*i+2;
    
    int max=i;
    if(l<n && h->arr[l]>h->arr[max])
        max=l;
    
    if(r<n && h->arr[r]>h->arr[max])
        max=r;
    if(max!=i)
    {
        int tmp=h->arr[i];
        h->arr[i]=h->arr[max];
        h->arr[max]=tmp;
        percolateDown(h,n,max);
    }
}

void heapSort(Heap *h, int n,int t[])
{
    for(int i=(n/2)-1;i>=0;i--)
        percolateDown(h,n,i);
        
    for(int i=n-1;i>0;i--)
    {
        int tmp=h->arr[0];
        h->arr[0]=h->arr[i];
        h->arr[i]=tmp;
        percolateDown(h,i,0);
        
    }
    for(int i=0;i<n;i++)
    cout<<h->arr[i]<<" ";
}
int main()
{
    cout<<"Heap Sort"<<endl;
    int n=9;
    int t[n]={10,4,43,5,57,91,45,9,7};
    Heap *h=new Heap(n,t);
    heapSort(h,n,t);
  
}

