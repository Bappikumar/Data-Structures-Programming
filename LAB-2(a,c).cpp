#include<iostream>

using namespace std;

int main()
{
    int arr[100];
    int sr,rp,i,j,temp,n,sum,swap;
    sum=0;

    cout<<"Enter the array size: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Elements number of "<< i <<" array is: ";
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

    cout<<"Enter the number for replace: ";
    cin>>sr;
    cout<<"Enter the number for replace: ";
    cin>>rp;
    for(i=0;i<n;i++)
    {
        if(arr[i]==sr)
        {
            cout<<"value is in "<< i <<" position "<<endl;
            arr[i]=rp;
            sum++;
        }


    }
    if(sum==0)
    {
        cout<<"Number not found"<<endl;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            cout<<"New array number "<< i <<" is "<<arr[i]<<endl;
        }
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
                  cout<<"Again after sorted: "<<arr[i]<<endl;
              }
}

