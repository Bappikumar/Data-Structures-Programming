#include<iostream>

using namespace std;

int main()
{
    int arr[100],total,temp,sin,i,j;
    double average,n,max,min;
    total=0;
    j=0;


    cout<<"Size of array is: ";
    cin>>n;
    cout<<endl;


    for(i=0;i<n;i++)
    {
        cout<<"Array value of "<< i << " is: ";
        cin>>arr[i];
    }
    cout<<endl;
    max=arr[0];
    min=arr[0];

    for(j=0;j<n;j++)
    {
      if(arr[j]>max)
      {
          max=arr[j];
      }
    }
    cout<<"max value is: "<< max <<endl;
    cout<<endl;

    for(i=0;i<n;i++)
    {
      if(arr[i]<min)
      {
          min=arr[i];
      }
    }

    cout<<"min value is: "<< min <<endl;
    cout<<endl;

    for(i=0;i<n;i++)
    {
        total=total+arr[i];
    }
    cout<<"Total value is: "<< total <<endl;
    cout<<endl;

    average=total/n;
    cout<<"average value is: "<< average <<endl;
    cout<<endl;
}
