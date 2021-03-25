#include<iostream>

using namespace std;

int main()
{
    int arr[100],i,j,n;
    int sp,ep,mp,iteam,loc,comp;

    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Searching iteam is: ";
    cin>>iteam;
    sp=0;
    ep=n-1;
    loc=-1;
    comp=0;

    for(i=0;i<n;i++)
    {
        cout<<"Enter the elements number "<< i << " is: ";
        cin>>arr[i];
    }
    while(sp<=ep){
        comp++;
        mp=(sp+ep)/2;

        if(arr[mp]==iteam)
        {
            loc=mp;
            break;
        }
        else if(arr[mp]<iteam)
            {
                sp=mp+1;
            }
        else
            {
                sp=mp=1;
            }

    }
    for(i=0;i<n;i++)
    {
        cout<<"The sorted array is: "<<arr[i]<<endl;
    }
        if(loc==-1)
        {
            cout<<iteam<<" is not found \n"<<"total num of comp: "<< comp <<endl;
        }

            else
                {
                cout<<iteam<< " is found in "<< loc << " number location. \n"<<"Total comp is: "<<comp<<endl;
            }


}
