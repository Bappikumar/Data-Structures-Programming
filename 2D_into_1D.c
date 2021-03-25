#include<stdio.h>

int main(){
    int k=0;
    int a[3][3],b[9],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
        printf("Enter the value for 2D array: ",i,j);
        scanf("%d",&a[i][j]);
        }
    }

    printf("Two dimentional array elements: \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                b[k]=a[i][j];
                printf("%d ",a[i][j]);
                k++;

            }
                printf("\n");

                }


        printf("\n1d array: \n");
        for(k=0;k<9;k++)
           {
                printf("%d ",b[k]);
                //k++;
        }
        printf("\n");
        printf("\nNow group them: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                printf("\t%d ",b[k]);
                k++;
                }
                printf("\n");


                }
                printf("\nGroup 3 elements are: ");
                for(i=6;i<9;i++){

                    printf("\t%d",b[i]);
                }
                //printf("\n");




}
