#include<iostream>
using namespace std;
int main()
{
    int i, array[8]={3,8,9,5,6,2,99,78};
    int min=array[0];
    for(i=0; i<8;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<min<<endl;
    return 0;
}
