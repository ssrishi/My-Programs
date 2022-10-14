#include<iostream>
using namespace std;
int main()
{
    int l, b, h,vol;
    cout<<"Enter length breath and height: ";
    cin>>l>>b>>h;
    vol = 2*(l*b + b*h + h*l);
    cout<<"Volume of cuboid is "<<vol;
    return 0;
}
