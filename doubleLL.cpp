#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    node *prev;
    int data;
    node *next;
    public:
    node(node *prev,int data,node *next)
    {
        this->prev=prev;
        this->data=data;
        this->next=next;
    }
    public:
    node(int dt)
    {
         data=dt;
         prev=NULL;
         next=NULL;
    }
};

node *convert2Array(vector<int>&arr)
{
    node *head=new node(arr[0]);
    node *p=head;
    for(int i=1;i<arr.size();i++)
    {
        node *temp=new node(p,arr[i],NULL);
        p->next=temp;
        p=temp;
    }
    return head;
}
void traversal(node *t)
{
    while(t!=NULL)
     {
        cout<<t->data<<"->";
        t=t->next;
     }
     cout<<"/0"<<endl;
}


int main()
{
    vector<int>arr={2,4,6,8,10};
    node *head=convert2Array(arr);
    traversal(head);
    
    return 0;
}