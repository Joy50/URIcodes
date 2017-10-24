/*This code is written by Md. Mahmudul Haque Joy
Student of: Bangladesh Army University Of Science and Technology Saidpur.
Email@joybaust50@gmail.com
URI code Number :1006*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c1,c2,u1,u2;
    float t1,t2;
    cin>>c1>>u1>>t1;
    cin>>c2>>u2>>t2;
    float val=(t1*u1)+(t2*u2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<val<<endl;
    return 0;
}
