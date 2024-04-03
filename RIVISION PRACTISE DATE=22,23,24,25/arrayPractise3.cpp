//length Of the array(kitne number of element hai)
#include<iostream>
using namespace std;
int main()
{
    int array[5]={2,4,5,6,7};
    cout<<sizeof(array)/sizeof(array[0])<<endl;
}