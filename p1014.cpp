#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int x;
    float y,r;
    cin>>x>>y;
    r=x/y;
    cout<<fixed<<setprecision(3)<<r<<" km/l"<<endl;
    return 0;
}
