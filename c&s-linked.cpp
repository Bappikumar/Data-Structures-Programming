#include<iostream>
#include<stdlib.h>

using namespace std;

 struct list
{
    int data;
    struct list *next;
}node;
typedef struct linked_list node;
node *head=NULL, *last=NULL;

void insert_at_last(int value)
{
    node *temp_node;
    temp_node=(node*)malloc(sizeof(node));

    temp_node->number=value;
    temp_node->next=NULL;

    if(head==NULL)
    {
        head=temp_node;
        last=temp-node;
    }
    else
    {
        last->next=temp_node;
        last=temp_node;
        cout<<last<<endl;
    }
}


int main()
{
    cout<<"Node is created."<<endl;
    return 0;
}
