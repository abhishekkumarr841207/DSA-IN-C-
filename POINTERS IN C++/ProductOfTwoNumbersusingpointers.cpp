#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    
    int *ptr=&a;
    int *ptrh=&b;
    int product=(*ptr) * (*ptrh);
    cout<<"product is:"<<product<<endl;
    return 0;
}
