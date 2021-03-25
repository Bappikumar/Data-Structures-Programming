//Bubble sort

#include<iostream>
using namespace std;

int main()
    {
        int arr[100],i,temp,j,n,swap;

        cout<<"Enter the array size: ";
        cin>>n;

        for(i=0;i<n;i++)
        {
            cout<<"Array elements of "<< i <<" is: ";
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++)
            {
                swap=0;
          for(j=0;j<(n-i)-1;j++)
            {
              if(arr[j]>arr[j+1])
              {
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
                  swap=1;
              }

            }
          if(swap==0)
              {
                  break;
              }
        }
        for(i=0;i<n;i++)
              {
                  cout<<"After sorted: "<<arr[i]<<endl;
              }

    }

