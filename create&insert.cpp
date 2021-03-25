#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node *root;
node *head=NULL;
node *tail=NULL;

void add_node(int data)
{
    node *new_node=new node();
    new_node->data=data;
    new_node->link=NULL;

    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
    }
    else
    {
        tail->link=new_node;
        tail=new_node;
    }
}

void display(void)
{
    struct node *temp;
    temp=root;
    if(temp==NULL)
    {
        cout<<"List is empty."<<endl;
    }
    while(temp!=NULL)
    {
        cout<<"List is: "<<temp->data<<endl;
        temp=temp->link;
    }

}
void insert()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter the data: ";
    cin>>temp->data;
    temp->link=NULL;

    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

int main()
{
    cout<<"Node is created."<<endl;
    int x,n,ch;
    cout<<"enter the size of list: ";
    cin>>n;

    cout<<"give the node number: "<<endl;

    while((cin>>x)!=0){//Till end of file (ctrl+z)
        add_node(x);
    }
    display();

    while(1)
    {
       cout<<"single linked list operations."<<endl;
       cout<<"1.add node"<<endl;
       cout<<"2.insert at begin"<<endl;
       cout<<"3.Insert at middle or end"<<endl;
       cout<<"4.length"<<endl;
       cout<<"5.display"<<endl;
       cout<<"6.Traverse max or min"<<endl;
       cout<<"7.searching"<<endl;
       cout<<"8.quit"<<endl;

       cout<<"Enter your choice: "<<endl;
       cin>>ch;

       switch(ch)
       {
           case 1:add_node();
           break;
           case 2:insert_at_begin();
           break;
           case 3:Insert_middle_end();
           break;
           case 4:length();
           break;
           case 5:display();
           break;
           case 6:traverse_max_or_min();
           break;
           case 7;searching();
           break;
           case 8:exit(1);


       }
    }


    //insert();
    return 0;
}
