#include<iostream>
using namespace std;
int main()
{
    int i,rev=0;
    cout<<"enter numbers:";
    cin>>i;
    while(i>0)
    {
        rev=rev*10+i%10;
        i=i/10;
    }
    cout<<"reverse="<<rev;
    return 0;

}