#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    
    int *ptr=&a;
    int *ptrh=&b;
    int sum=(*ptr) + (*ptrh);
    cout<<sum<<endl;
    return 0;
}
