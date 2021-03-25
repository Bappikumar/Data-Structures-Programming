#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct list
{
    int data;
    struct list *next;
}node;

void insert(node *s,int data)
{
    while(s->next!=NULL)
    {
       s=s->next;
    }
    s->next=(node*)malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}

void deletenode(node *s,int data)
{
    while(s->next!=NULL)
    {
        if(s->next->data=data)
        {
            s->next=s->next->next;
        }
        s=s->next;
    }
}

void display(node *s)
{
    while(s->next!=NULL)
    {
        cout<<s->next->data<<endl;
        s=s->next;
    }
}

int main()
{
    node *first=(node*)malloc(sizeof(node));
    first->next=NULL;

    insert(first,5);
    insert(first,3);
    insert(first,9);
    insert(first,42);
    insert(first,0);
    insert(first,10);
    cout<<"nodes Are: "<<endl;
     display(first);

     deletenode(first,0);
     cout<<"nodes Are: "<<endl;
     display(first);

}

