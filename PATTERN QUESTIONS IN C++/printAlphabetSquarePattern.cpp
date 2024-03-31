#include<iostream>
using namespace std;
int main()
{
    int r=4;
    int c=4;
    char alphabet='A';
    cout<<"Print alphabet square pattern:";
    for (int i = 1; i<=4; i++)
    {
        char a=alphabet;
        for (int j=1; j<=4; j++)
        {
            cout<< a ;
            a++;
        }
        
        cout<<endl;
    }
    return 0;
}