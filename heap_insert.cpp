#include<iostream>
#include<stdlib.h>

using namespace std;

void insheap(int arr[i],int n=0,int item)
    {
        n=n+1;
        struct *loc=n;
        cout<<"Insrt value is: ";
        cin>>item;

        while(loc>1)
        {
            int parent=loc/2;

        }
    }
int main()
{
    int heap_sz,i,j;
    int arr[100];
    cout<<"enter the heap size: "<<endl;
    cin>>heap_sz;

    for(i=0;i<heap_sz;i++)
    {
        cout<<"Enter the array "<< i << " is: "<<endl;
        cin>>arr[i];
    }
     cout <<"The array list is: "<<endl;
     for(i=0;i<heap_sz;i++)
        {
            cout <<arr[i]<<endl;
        }

}
