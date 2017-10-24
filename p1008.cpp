#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num,hr;
    float am,amh;
    cin>>num>>hr>>amh;
    am=amh*hr;
    cout<<"NUMBER = "<<num<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<am<<endl;
    return 0;
}
