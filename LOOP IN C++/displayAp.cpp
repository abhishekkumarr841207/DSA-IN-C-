#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value"<<endl;
   cin>>n;
    for(int i=100;i>=n;i-=3){
        cout<<"the arithematic prograssion is :"<<i<<endl;
    }
    return 0;
}