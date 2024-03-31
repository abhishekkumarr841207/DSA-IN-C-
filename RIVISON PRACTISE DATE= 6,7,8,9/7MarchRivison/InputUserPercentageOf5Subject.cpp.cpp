//input user percentage of five subject//
#include<iostream>
using namespace std;
int main()
{
    int E,M,H,C,S,sum, Percentage;
    cout<<"Enter the Marks of 5 subect:";
    cin>>E>>M>>H>>C>>S;
    sum=E+M+H+C+S;
    cout<<"Sum of marks="<<sum<<endl;
    Percentage=(sum*100)/500;
    cout<<"Percentage Marks="<<Percentage<<endl;
    


}