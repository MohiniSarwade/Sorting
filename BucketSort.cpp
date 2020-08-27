#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bucketSort(float t[],int n)
{
    //int k=100;
    vector<float>b[n];
    for(int i=0;i<n;i++)
    {
        int bi=n*t[i];
        b[bi].push_back(t[i]);
    }
    for(int i=0;i<n;i++)
        sort(b[i].begin(),b[i].end());
    int index=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<b[i].size();j++)
            t[index++]=b[i][j];
    }
    for(int i=0;i<n;i++)
        cout<<t[i]<<" ";
}

int main()
{
    cout<<"Bucket Sort"<<endl;
    int n=6;
    float t[n]={0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    bucketSort(t,n);
    return 0;
}

