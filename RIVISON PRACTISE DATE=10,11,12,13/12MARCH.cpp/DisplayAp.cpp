//Display this AP - 1,3,5,7,9.. upto ‘n’ terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value"<<endl;
   cin>>n;
    for(int i=1;i<=n;i+=2){
        cout<<"the arithematic prograssion is :"<<i<<endl;
    }
}