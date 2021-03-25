#include<iostream>
using namespace std;

int main(){
    char arr1[5],arr2[5],i,a;
    string arr3;

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
       arr3=arr1[i]+arr2[i];
    }
    cout<<"Addition of two char arrays: "<<endl;

    for(i=0;i<5;i++)
    {
        cout<<arr1[i]<<"+"<<arr2[i]<<"="<<arr3<<endl;
    }

}

