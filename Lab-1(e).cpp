#include<iostream>
#include<math.h>
using namespace std;

float inRadians(float degree)
{
    return (degree*3.1416)/180;
}

int main()
{
    float degree,radians;
    //float sin,tan,cos;
    cout<<"enter an angle in degree: ";
    cin>>degree;

    radians=inRadians(degree);
    cout<<"sin: "<<sin(radians)<<"\ncos: "<<cos(radians)<<"\ntan: "<<tan(radians)<<endl;
return 0;
}
