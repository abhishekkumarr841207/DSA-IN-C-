#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=3;i>=1;i--){//outer loop
        for(j=i;j>=0;j--){//inner loop
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
    