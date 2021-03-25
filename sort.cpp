#include<iostream>

using namespace std;

int main()
{
    int arr[100];
    int sr,rp,i,j,k,temp,n,sum,swap;
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
            cout<<"Input value: ";
            cin>>rp;

            for(k=0;k<n;k++)
            {
               if(arr[k]>rp)
                    {
                      break;
                    }

            }
            cout<<"k: "<< k <<endl;
            n=n+1;
            int temp1;
            for(i=n;i>k;i--)
            {
                arr[i]=arr[i-1];
            }
        arr[k+1]=rp;
        for(i=0;i<n;i++)
              {
                  cout<<"After new sorted: "<<arr[i]<<endl;
              }

}
