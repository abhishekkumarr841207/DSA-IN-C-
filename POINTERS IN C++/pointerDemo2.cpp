#include<iostream>
using namespace std;
int main()
{
    int x=19;
    float y=7.8;

    
    int *ptr=&x;
    cout<<*ptr<<"\n"; // value present at the address stored in ptr//Dereference Operator=Symbol=*
    
 float *ptrf=&y;
    cout<<*ptr<<"\n";//value present at the address stored in ptr
    return 0;
}