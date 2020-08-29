#include<bits/stdc++.h>
using namespace std;

void sortArr(int a[],int m,int b[], int n)
{
    int i=n-1,j=m-1,k=m+n-1;
    for(;k>=0;k--)
    {
        if(b[i]>a[j]||j<0)
        {
            a[k]=b[i];
            i--;
            if(i<0)
                break;
        }
        else
        {
            a[k]=a[j];
            j--;
        }
    }
}
int main()
{
    int m=6;
    int n=5;
    int a[m+n]={2,3,7,10,12,17},b[n]={1,4,5,11,15};
    sortArr(a,m,b,n);
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<m+n;i++)
        cout<<a[i]<<" ";
    
}
