#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=4;i<=1;i--){//outer loop
        for(j=1;j>=i;j--){//inner loop
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
    