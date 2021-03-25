#include<iostream>
using namespace std;

int main(){
   int a[3][3],b[3][3],c[3][3],i,j;


    cout<<"Enter 3 elements in first matrix: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
        cin >>a[i][j];
        }
    }

    cout<<"Enter 3 elements in second matrix: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
        cin >>b[i][j];
        }
    }

    cout<<"Value of first matrix: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<endl;

        }
        cout<<" " <<endl;
    }

    cout<<"Value of second matrix: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
        cout<<b[i][j]<<endl;
        }
        cout<<" " <<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
        c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"Addition of two matrixs: "<<endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
        cout<<c[i][j]<<endl;
        }
        cout<<" " <<endl;

    }
}

