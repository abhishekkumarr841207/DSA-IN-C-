//Find the second largest element in the given
//Array
#include<iostream>
using namespace std;
int main()
{
    int i,array[5]={7,6,10,4,8};
    int secondmax=array[0];
    for(i=0;i<5;i++)
    {
        if(array[i]>secondmax)
        {
            secondmax=array[i];
        }
    }
    cout<<"second max is:"<<secondmax;
    return 0;
}