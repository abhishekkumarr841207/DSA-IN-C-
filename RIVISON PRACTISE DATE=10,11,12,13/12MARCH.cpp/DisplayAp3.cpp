/*
Display this AP - 4,7,10,13,16.. upto ‘n’ terms*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value"<<endl;
   cin>>n;
    for(int i=4;i<=n;i+=3){
        cout<<"the arithematic prograssion is :"<<i<<endl;
    }
}