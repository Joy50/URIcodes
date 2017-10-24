#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.14159
using namespace std;
int main()
{
    int a;
    cin>>a;
    float v=(4.0/3.0)*PI*pow(a,3);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<v<<endl;
    return 0;
}
