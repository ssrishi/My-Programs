#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0,i;
    cout<<"Enter elements:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    cout<<"Total sum is "<<sum;
    return 0;
}

