#include<iostream>
#include<stdio.h>
#define Inf 100005
#define sz 10000

using namespace std;

int Q[sz][sz];
int weight [sz][sz];

int main()
{
    int i,j,k,n,sum;
    cout<<"nodes number: "<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>weight[i][j];

            if(weight[i][j]==0)
            {
                Q[i][j]=Inf;
            }
            else
            {
                Q[i][j]=weight[i][j];
            }
        }
    }

    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sum=Q[i][k]+Q[k][j];

                if (Q[i][j]>sum)
                {
                    Q[i][j]=sum;
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<Q[i][j]<<' ';
        }
        cout<<endl;
    }
}
