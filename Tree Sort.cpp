#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int x)
    {
        
        data=x;
        left=right=NULL;
    }
};

Node * insertion(Node *node,int n)
{
    if(node==NULL)
    {
        Node *new_node=new Node(n);
        return new_node;
    }
    else
    {
        if(n<node->data)
            node->left=insertion(node->left,n);
        else if(n>node->data)
            node->right=insertion(node->right,n);
    }
    return node;
}
void Inorder(Node *node, vector<int>&p)
{
  
    if(node)
    {
        Inorder(node->left,p);
        p.push_back(node->data);
        //cout<<node->data<<" ";
        Inorder(node->right,p);
    }
}
void TreeSort(int t[],int n,vector<int> &p)
{
   Node *root=new Node(t[0]);
   for(int i=1;i<n;i++)
       root=insertion(root,t[i]);
  
    Inorder(root,p);
}
int main()
{
    cout<<"Tree Sort"<<endl;
    int n=9;
    int t[n]={10,4,43,5,57,91,45,9,7};
    vector<int>p;
    TreeSort(t,n,p);
    
    for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
    
    return 0;
}

