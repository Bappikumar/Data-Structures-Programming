#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct mylist
{
    int data;
    struct mylist *next;
}node;

void insert(node *s,int data)
{
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next=(node*) malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}

void display(node *s)
{

    while(s->next!=0)
    {
        cout<< s->next->data <<endl;
        s=s->next;
    }
}

int main()
{
    int i,n,data,s;
   // struct *first;
    cout<<"Enter the element size: ";
    cin>>n;

   // insert(first,5);
   // insert(first,3);
   // insert(first,9);
   // insert(first,42);
    //insert(first,0);
    //insert(first,10);
    cout<<"insert values: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>data;
}

     node *first=(node*)malloc(sizeof(node));
     first->next=NULL;
    for(i=0;i<n;i++)
    {
      insert(first,data);


    }
    cout<<"nodes data are: \n";

    display(first);

    return 0;


}
