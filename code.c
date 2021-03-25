#include<stdio.h>

struct BST{
    int value;
    struct BST *left;
    struct BST *right;
};
int main()
    {
    struct BST *p,*q,*root;
    int n,i,j;
    printf("The n value: \n");
    scanf("%d",&n);
    int a[10];
    for(j=0;j<n;j++){
            printf("The array value: ");
            scanf("%d",&a[j]);
            }
    root->value=a[0];

for(i=0;i<n;i++)
      {
        q->value=a[i];
        p=root;
    }

while(1)
    {
        if(q->value<=p->value)
            {
                if (p->left==NULL)
                p->left=q;
        else
            p=p->left;

        }
        else if(q->value>p->value)
        {
            if(p->right=NULL)
                p->right=q;
            else
                p=p->right;
        }
    }
}



