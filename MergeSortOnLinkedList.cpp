#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node *insertAtbegin(Node *head, int n)
{
    Node *new_node=new Node();
    new_node->data=n;
    new_node->next=head;
    head=new_node;  
}
Node *merge(Node *a, Node *b)
{
    Node *res=NULL;
    if(a==NULL)
        return b;
    else if(b==NULL)
        return a;
        
    if(a->data<=b->data)
    {
        res=a;
        res->next=merge(a->next,b);
    }
    else
    {
        res=b;
        res->next=merge(a,b->next);
    }
    return res;
}
void splitLink(Node *head, Node **frontRef, Node **backref)
{
    Node *fast,*slow;
    fast=head->next;
    slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    *frontRef=head;
    *backref=slow->next;
    slow->next=NULL;
}
void mergeSort(Node **headRef)
{
    Node *head=*headRef,*a,*b;
    if(head==NULL|| head->next==NULL)
        return;
    splitLink(head,&a,&b);
    mergeSort(&a);
    mergeSort(&b);
    *headRef=merge(a,b);
}

int main()
{
    Node *root=NULL;
    root=insertAtbegin(root,15);
     root=insertAtbegin(root,10);
     root=insertAtbegin(root,5);
     root=insertAtbegin(root,20);
     root=insertAtbegin(root,3);
     root=insertAtbegin(root,2);
     print(root);
     cout<<"Merge Sort"<<endl;
     mergeSort(&root);
      print(root);
    return 0;
}
