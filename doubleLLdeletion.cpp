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
        prev=next=NULL;
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

void traverse(node *t)
{
    while(t!=0)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<"/0"<<endl;
}

node *delete_head(node *head)
{
    node *h=head;
    if(head==NULL || head->next==NULL)
       cout<<"head is empty"<<endl;
    
         head=head->next;
         head->prev=NULL;
         h->next=NULL;
         delete(h);

    return head;
}
node *delete_tail(node *head)
{
   node *t1=head;
   if(head==NULL || head->next==NULL)
     cout<<"head is empty"<<endl;
    else{
        while(t1->next!=NULL)
        {
            t1=t1->next;
        }
        t1->prev->next=NULL;
        t1->prev=NULL;
        free(t1);
    }
    return head;
}
node *delete_kth_element(node *head)
{
   node *temp=head;
   int pos,count=0;
   cout<<"enter the position of element you wanna delete :";
   cin>>pos;
   if(head==NULL)
      return NULL;

   while(temp!=NULL)
   {
      count++;
      if(pos==count)
           break;  //this make temp point to kth pos
       temp=temp->next;
   }
  node *back=temp->prev;
  node *front=temp->next;
  if(back==NULL && front==NULL)
  {
      delete temp;
      return NULL;
  }
  else if(back==NULL) //means standing at head
       return delete_head(head);

  else if(front==NULL) //standing at tail
       return delete_tail(head);
  else{
     back->next=front;
     front->prev=back;
     temp->next==NULL;
     temp->prev==NULL;
     free(temp);
     return head;
  }
}
void delete_node_byValue(node *temp)  //constraint:node!=head
{
    //node *temp=head;
    node *back=temp->prev;
    node *front=temp->next;
    if(front==NULL)
    {
        back->next=NULL;
        temp->prev=NULL;
        free(temp);
        return;
    }
    back->next=front;
    front->prev=back;
    temp->prev=NULL;
    temp->next=NULL;
    free(temp);
    //return head;
}

int main()
{
    vector<int>arr={10,20,30,40,50,60};
    node *head=convert2Array(arr);
    traverse(head);
    head=delete_head(head);
    traverse(head);
    head=delete_tail(head);
    traverse(head);
    head=delete_kth_element(head);
    traverse(head);    
    delete_node_byValue(head->next); //if you pass head it not work
    traverse(head);
    return 0;
}

