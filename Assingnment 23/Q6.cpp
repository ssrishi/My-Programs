#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"Enter Three numbers: ";
    cin>>a>>b>>c;
    avg = (a+b+c)/3.0;
    cout<<"Average of "<<a<<", "<<b<<" and "<<c<<" is "<<setprecision (2)<<avg;
    return 0;
}

