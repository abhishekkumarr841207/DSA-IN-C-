//Find the maximum value out of all the elements
//in the array
#include<iostream>
using namespace std;
int main()
{
    int i, array[8]={3,8,9,5,6,2,99,78};
    int max=array[0];
    for(i=0; i<8;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
