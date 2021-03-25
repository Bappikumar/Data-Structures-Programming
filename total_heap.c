#include<stdio.h>
#include<stdlib.h>

int array[100],n;

 main()
{
    int ch,num;
    n=0;
    while(1)
    {
        printf("1.Insert data.\n");
        printf("2.Delete data.\n");
        printf("3.Display data.\n");
        printf("4.Quit.\n");

        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 : printf("Enter data for inserting: \n");
                     scanf("%d",&num);
                     insert(num,n);
                     n=n+1;
                     break;

            case 2 : printf("Enter data for delete: \n");
                     scanf("%d",&num);
                     delete(num);
                     break;

            case 3 : display();
                     break;

            case 4 : exit(0);

            default : printf("Invalid choice.\n");


        }
 display()
        {
            int i;
            if (n==0)
            {
                printf("Heap is empty.\n");
                return;
            }
            for(i=0;i<n;i++)
            {
                printf("Heap is:\n %d",array[i]);
                printf("\n");
            }
        }
 insert(int num, int loc);
        {
            int parentnode;
            while(loc>0)
            {
                parentnode=(loc-1)/2;

                if(num<=array[parentnode])
                {
                    array[loc]=num;
                    return;
                }
                array[loc]=array[parentnode];
                loc=parentnode;
            }
            array[0]=num;
            }

delete(int num)
            {
                int left,right,i,temp,parentnode;

                for(i=0;i<num;i++)
                {
                    if(num==array[i])
                    {
                        break;
                    }
                    if(num!=array[i])
                    {
                        printf("Number not found.\n");
                        return;
                    }
                    array[i]=array[n-1];
                    n=n-1;
                    parentnode=(i-1)/2;

                    if(array[i]>array[parentnode])
                    {
                        insert(array[i],i);
                        return;
                    }
                    left=(2*i)+1;
                    right=(2*i)+2;

                    while(right<n)
                    {
                        if(array[i]>=array[left] && array[i]>=array[right])
                        {
                            return;
                        }
                        if(array[right]<=array[left])
                        {
                            temp=array[i];
                            array[i]=array[left];
                            array[left]=temp;
                            i=left;
                        }

                        else
                        {
                            temp=array[i];
                            array[i]=array[right];
                            array[right]=temp;
                            i=right;
                        }
                        left=(2*i)+1;
                        right=(2*i)+2;

                    }
                    if(left==n-1 && array[i])
                    {
                        temp=array[i];
                        array[i]=array[left];
                        array[left]=temp;
                    }
                }
            }
        }

    }

