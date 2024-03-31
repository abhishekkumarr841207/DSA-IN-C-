//Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms. n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value"<<endl;
   cin>>n;
    for(int i=1;i<=n;i*=2){
        cout<<"the arithematic prograssion is :"<<i<<endl;
    }
}
