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

node *convert2ll(vector<int>&a)
{
    node *head=new node(a[0]);
    node *temp=head;
    for(int i=1;i<a.size();i++)
    {
        node *t=new node(temp,a[i],NULL);
        temp->next=t;
        temp=t;
    }
    return head;
}
void traverse(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<"/0"<<endl;
}
node *insert_at_beforeHead(node *head)
{
    node *h=head;
    node *d=new node(20);
    d->next=h;
    h->prev=d;
    head=d;
    return head;
}




int main()
{
   vector<int>a={100,200,300,400,500,600,700,800,900};
   node *head=convert2ll(a);
   traverse(head);
   head=insert_at_beforeHead(head);
   traverse(head);
    return 0;
}