//minium value
#include<iostream>
using namespace std;
int main()
{
    int i, array[8]={3,8,9,5,6,2,99,78};
    int mini=array[0];
    for(i=0; i>8;i++){
        if(array[i]<mini){
            mini=array[i];
        }
    }
    cout<<mini<<endl;
    return 0;
}
