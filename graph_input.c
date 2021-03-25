//#include<iostream>
#include<stdio.h>

//using namespace std;

int main()
{
    int n,i,j;
    int matrix[100][100];

    printf("Enter the nmber of  nodes: ");
    scanf("%d ",&n);

    for (i=0;i<n;i++){
        for(j=1;j<n;j++)
        {
            scanf("%d ",&matrix[i][j]);

          }
        printf("\n");

    }
    printf("matrix is:\n");
    for (i=0;i<n;i++){
            for(j=0;j<n;j++){
             printf("%d ",matrix[i][j]);
              }
        printf("\n");
    }
    printf("\n");

}
