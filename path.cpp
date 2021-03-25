#include<iostream>
using namespace std;

#define sz 10000

int path[sz][sz];
int AB[100][100];

int main ()
{
    int i,j,k,n;
    cout<<"nodes number: "<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>AB[i][j];

            if(AB[i][j]==0)
            {
                path[i][j]=0;
            }
            else
            {
                path[i][j]=1;
            }
        }
    }
    for(k=0;k<n;k++)
        {
          for(i=0;i<n;i++)
          {
              for(j=0;j<n;j++)
              {
                  path[i][j]=path[i][j] | ( path[i][k] & path[k][j] );
              }
          }
        }

        cout<<"Path matrix using warshall algorithm is: "<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            cout<<path[i][j]<<' ';
            }
        cout<<endl;
        }
}



