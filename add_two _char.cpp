#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a[10]={"Bappi"};
    char b[10]={"kumar"};

    string at,bt;

    at=string(a);
    bt=string (b);

    string add=at+" "+bt;
    cout<<add<<endl;

return 0;
}
