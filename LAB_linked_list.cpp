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

/*void traverse()
{
    struct node *s;
    s=first;
    while(s->next!=NULL)
    {
        cout<<s->next;
        s=s->next;
    }
}*/

void search(node *s,int data)
{
    int count=0;
    while(s->next!=NULL)
    {
        count++;
    }
    s=s->next;
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
    cout<<"Node is created. "<<endl;
    node *first=(node*)malloc(sizeof(node));
    first->next=NULL;

   cout<<"nodes are: "<<endl;
   insert(first,5);
   insert(first,3);
   insert(first,9);
   insert(first,42);
   insert(first,0);
   insert(first,10);

   display(first);


   //traverse(first);
   struct list *s;
   //int print;
    s=first;
    while(s!=NULL)
    {
        //print;s->info;
        s=s->next;

    }
    for(int i=0;i<=6;i++)
    {
        cout<<"Traverse nodes are: "<< s <<endl;

    }
    cout<<"Search nodes are: "<< s <<endl;
    search(first,10);
    display(first);

}
