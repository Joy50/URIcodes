#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int p)
{
    int x=sqrt(p);
    for(int i=2;i<=x;i++)
    {
        if(p%i==0)
            return false;
    }
    return true;
}
main()
{
    int a,n;
    bool x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        x=isPrime(a);
        if(x==true)
            cout<<"Prime"<<endl;
        else
            cout<<"Not Prime"<<endl;
    }
}
