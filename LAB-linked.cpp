//create ,Insert,delete,display,searching

#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct list
{
    int data;
    struct list *next;
}node;

//node *root=NULL;

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

void display(node *s)
{
    while(s->next!=NULL)
    {
        cout<< s->next->data <<endl;
        s=s->next;
    }
}

void search(node *s,int data)
{
    int count=0;
    while(s->next!=NULL)
    {
        count++;
    }
    s=s->next;
}

void deletenode(node *s)
{
    while(s->next!=NULL)
    {
        if(s->next->data=data)
        {
            s->next=s->next->next;
            //return 0;
        }
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

   search(first,42);
   cout<<"nodes Are: "<<endl;

   deletenode(first,0);
   cout<<"nodes Are: "<<endl;
   display(first);
   cout<<"nodes Are: "<<endl;
}
