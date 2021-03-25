#include<iostream>
using namespace std;

int main(){
    int arr1[5],arr2[5],arr3[5],i;

    cout<<"Enter five elements in first array: "<<endl;
    for(i=0;i<5;i++)
    {
        cin >> arr1[i];
    }

    cout<<"Enter five elements in second array: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr2[i];
    }

    for(i=0;i<5;i++)
    {
       arr3[i]=arr1[i]+arr2[i];
    }
    cout<<"Addition of two int arrays: "<<endl;

    for(i=0;i<5;i++)
    {
        cout<<arr1[i]<<"+"<<arr2[i]<<"="<<arr3[i]<<endl;
    }



}
