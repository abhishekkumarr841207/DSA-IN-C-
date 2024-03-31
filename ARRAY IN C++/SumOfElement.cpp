#include<iostream>
using namespace std;
int main ()
{
    int i, array[6]={5,3,3,5,5,7};
    int sum=0;
    for (i=0;i<6;i++){
        sum+=array[i];
    }
    cout<<sum<<endl;

    return 0;
}

