#include<iostream>
using namespace std;
int main ()
{
    int i, array[6]={4,7,9,5,3,8};
    int multi=1;
    for (i=0;i<6;i++){
        multi*=array[i];
    }
    cout<<multi<<endl;

    return 0;
}

