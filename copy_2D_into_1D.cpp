#include<iostream>
using namespace std;

int main(){
    int a[2][2], n=3;
    int i,j,k,b[2];
    //k=0;

    cout<<"Enter the elements of 2D arrays: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++){

        cin>>a[i][j];}
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++){
               // b[k]=a[i][j];
               cout<<a[i][j]<<endl;


        }
                    }
       // cout<<" "<<endl;
    }



