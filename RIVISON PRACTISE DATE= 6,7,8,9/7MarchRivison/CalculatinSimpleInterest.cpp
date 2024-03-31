#include<iostream>
using namespace std;
int main()
{
    float principal,rate,time,si;
    cout<<"Enter the principal,rate and time:";
    cin>>principal>>rate>>time;
    si=(principal*rate*time)/100;
    cout<<"simple interest="<<si<<endl;
}