#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    public:
    node(int data,node *next)
    {
       this->data=data;
        this->next=next;
    }
    node(int dt)
    {
        data=dt;
        next=NULL;
    }
};

node *insert_at_beg(int data,node *head)
{
    node *temp=head;
    node *n=new node(data);
    n->next=temp;
    head=n;
    return head;
}

node *insert_at_end(int data,node *head)
 {
    if(head==NULL) return head;
    node *t=head;
    node *r=new node(data);
    r->next=NULL;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=r;
    
    return head;
 }

 node *insert_at_pos(int pos,int val,node *head)
 {
    //node *temp=head;
    node *n=new node(val);
    n->next=NULL;
    if(pos==1)
    {
       node *temp=head;
       n->next=temp;
       head=n;
       return head;
    }
    int cnt=0;
    node *temp=head;
    node *p=NULL;
    while(temp!=NULL)
    {
       cnt++;
        if(cnt==pos)
        {
           n->next=temp;
           p->next=n;
        }
        p=temp;
        temp=temp->next;
    }
    return head;
 }
node *convertarraytoLL(vector<int> &arr)
{
   node *head=new node(arr[0]);
   node *t=head;
   for(int i=1;i<arr.size();i++)
   {
        node *n=new node(arr[i]);
        t->next=n;
        t=n;
   }
   return head;
}
void traverse(node *element)
{
    while(element!=NULL)
    {
        cout<<element->data<<"->";
        element=element->next;
    }
      cout<<"/0"<<endl;
}
int main()
{
    vector<int>arr={7,8,9,10,11,12,13};
    node *head=convertarraytoLL(arr);
    traverse(head);
    head=insert_at_beg(22,head);
    traverse(head);
    head=insert_at_end(20,head);
    traverse(head);
    head=insert_at_pos(4,30,head);
    traverse(head);
    return 0;
}