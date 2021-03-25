//Update,Deletion,searching,sorting.
#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int sr,rp,i,j,n,sum,loc,dl;
    cout<<"print the array size: ";
    cin>>n;
    sum=0;
    int value=0;
    int sum1=0;
    int value2=0;
    int value3=0;

    cout<<endl;
    for(i=0;i<n;i++)
        {
       cout<<"Array number "<< i << " value: ";
       cin>>arr[i];
       sum=sum+arr[i];
        }
    cout<<"\nTotal sum: "<<sum<<endl;
//Update/Insert

    cout<<"\nEnter to the number for search: ";
    cin>>sr;

    cout<<"\nEnter to the number for replace: ";
    cin>>rp;
    cout<<endl;

    for(j=0;j<n;j++)
        {
            if(arr[j]==sr)
                {
            cout<<"your value is in "<< j << " position."<<endl;
            cout<<endl;
            arr[j]=rp;
            sum1++;
                }

            }
            if(sum1==0)
            {
                cout<<"\nNumber is not found. "<<endl;
            }
                else
                    {
                        for(i=0;i<n;i++)
                            {

                                cout<<"New value "<< i << " no will be: "<< arr[i]<<endl;
                                value=value+arr[i];
                            }
                            cout<<endl;
                            cout<<"\nNew total value: "<<value<<endl;

                }
//Deletion

                cout<<"\nEnter the element for delete: ";
                cin>>dl;
                cout<<endl;

                for(i=0;i<n;i++)
                    {
                        if(arr[i]==dl)
                        {
                            value3=1;
                            loc=i;
                            break;
                        }
                    }
                        if(value3==1)
                        {
                           for(i=loc;i<n-1;i++)
                           {
                               arr[i]=arr[i+1];
                           }

                           for(i=0;i<n-1;i++)
                           {
                               cout<<"The new array elements "<< i << " is: "<< arr[i] <<endl;
                               value2=value2+arr[i];
                           }
                        }
                        else
                        {
                           cout<<"Element "<< dl << "is not found"<<endl;
                        }
                    cout<<endl;
                    cout<<"After deletion new value is: "<<value2<<endl;
                    cout<<endl;

//searching
                    int iteam;
                    cout<<"The search value is: ";
                    cin>>iteam;

                    for(i=0;i<n;i++)
                    {
                        if(arr[i]==iteam)
                            {
                            cout<<"Iteam is found in "<< i << " position: "<<arr[i]<<endl;
                            break;
                            }

                    }
                        cout<<endl;
                        if(i==n)
                       {
                           cout<<"Iteam is not found.";
                       }


}

