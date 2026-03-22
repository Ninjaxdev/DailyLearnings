#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *next;
   
    public :
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

node *delete_head(node *head)
{
    if(head==NULL)
       return head;
    node *temp=head;
    head=head->next;
    free(temp); //delete temp;(free previous head)
    return head;
}
node *delete_tail(node *head)
{
    if(head==NULL || head->next==NULL) return NULL;
    node *l=head;
    while(l->next->next!=NULL)
    {
        l=l->next;
    }
    //node *d=l->next;
    delete l->next;
    l->next=NULL;
    //free(d);
    return head;
}
node *delete_pos(node *head)
{
    //node *temp=head;
    node *prev=NULL;
    int count=0;
    int pos;
    cout<<"enter the position:";
    cin>>pos;
    if(head==NULL) return head;
    if(pos==1)
    {
        node *temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    node *temp=head;
    while(temp!=NULL)
    {
        count++;
        if(count==pos)
        {
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
  return head;
}
node *del_value(node *head)
{
    int value;
    cout<<"enter the value:";
    cin>>value;
    if(head==NULL) return head;
    if(head->data==value)
    {
        node *temp=head;
        head=head->next;
        free(temp);
    }
    node *prev=NULL;
    node *temp=head;
    while(temp!=NULL)
    {
      if(temp->data==value)
       {
         prev->next=prev->next->next;
         free(temp);
         break;
       }
       prev=temp;
       temp=temp->next;
    }
    return head;
}

node *convert2LL(vector<int> &arr)
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
int length(node *c)
{
   int count=1;
    while(c!=NULL)
    {
        c=c->next;
        count++;
    }
    return count;
}

void print(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<"/0"<<endl;
}

int main()
{
   vector<int>arr={4,6,8,10,12,14};
   node *head=convert2LL(arr);
   print(head);
   head = delete_head(head);
   print(head);
   head=delete_tail(head);
   print(head);
   head=delete_pos(head);
   print(head);
   head=del_value(head);
   print(head);
 
   return 0;
}