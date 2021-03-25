#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
int len;

void add_value()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d",&temp->data);
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

void length()
{
    int count=0;
    struct node *temp;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    //return count;
}


void add_after()
{
    int loc,len,i=1;
    //len=length();
    struct node *temp,*p;

    printf("Enter the location: ");
    scanf("%d\n",&loc);


    if(loc>len)
    {
       printf("Invalid location.");
       printf("Correct list is having %d nodes.\n",len);

    }
    else
    {
        p=root;
        while(i<loc)
        {
            p=p->link;
            i++;
        }
        temp=(struct node*)malloc(sizeof(struct node));
        temp->link=p->link;
        p->link=temp;
    }
}


void display()
{
    struct node *temp;
    temp=root;
    if(temp==NULL)
    {
        printf("List is empty.\n");
    }

    else
    {
        printf("The list is: ");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->link;
        }

        printf("\n");
    }

}

void delete_node()
{
    struct node *temp;
    int loc;
    printf("Enter the location: ");
    scanf("%d\n",&loc);
    if(loc>len)
    {
        printf("Invalid location.\n");
    }
    else if(loc==1)
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
    {
        struct node *p,*q;
        int i=1;
        p=root;
        while(i<loc-1)
        {
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}

void traverse()
{
    struct node *temp;
    int mx=0,mn=10000;
    if(mx<temp->data){
        mx=temp->data;
        temp=temp->link;
    };
    //return mx;

   // else(mn>temp->data)
  //  {
   //     mn=temp->data;
   //     temp=temp->link;
  //  }
  //  return mn;
}




int main()
{
    printf("Node is created\n");
    int ch;
    while(1)
    {
       cout<<"single linked list operations."<<endl;
       cout<<"1.add value"<<endl;
       cout<<"2.length"<<endl;
       cout<<"3.add_after"<<endl;
       cout<<"4.display"<<endl;
       cout<<"5.delete_node"<<endl;
       cout<<"6.traverse"<<endl;
       cout<<"7.quit"<<endl;

       cout<<"Enter your choice: "<<endl;
       cin>>ch;

       switch(ch)
       {
           case 1:add_value();
           break;
           case 2:length();
           break;
           case 3:add_after();
           break;
           case 4:display();
           break;
           case 5:delete_node();
           break;
           case 6:traverse();
           break;
           case 7:exit(1);


       }
       display();
    }

    return 0;
}
