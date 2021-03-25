//Declearation,Inserting,Traversing,Sum,Avarage.
#include<iostream>
using namespace std;

int main()
    {
        int age[100];
        int n,i,sum=0;
        double avarage;

        cout<<"students number will be: "<<endl;
        cin>>n;

        for(i=0;i<n;i++)
            {
            cout<<"student number "<< i <<" age   will be: "<<endl;
            cin>>age[i];
            sum=sum+age[i];
            }
            avarage=sum/n;

        for(i=0;i<n;i++)
            {
            cout<<"student "<< i <<" age is: "<<age[i]<<endl;
            }
            cout<<"Total sum: "<<sum<<endl;
            cout<<"Avarage will be: "<<avarage<<endl;
            cout<<endl;

        for(i=n-1;i>=0;i--)
            {
            cout<<"student "<< i <<" age is: "<<age[i]<<endl;
            }

}
