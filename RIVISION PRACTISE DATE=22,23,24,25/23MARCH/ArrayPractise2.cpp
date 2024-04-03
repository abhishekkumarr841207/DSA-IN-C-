#include<iostream>
using namespace std;
int main ()
{
    int i, array[6]={5,3,3,5,5,7};
    int product=0;
    for (i=1;i<6;i++){
        product*=array[i];
    }
    cout<<product<<endl;

    return 0;
}

