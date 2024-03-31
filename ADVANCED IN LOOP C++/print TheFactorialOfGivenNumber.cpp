//print the factorial of a given number
#include<iostream>
using namespace std;
int main()
{
    int n,fac=1;
    Cout<<"Enter the factorial number:";
    cin>>n;
    while(n>0)
    {
        fac=fac*n;
        n--;
    }
    cout<<"factorial="<<fac;
    return 0;

}
    