#include<iostream>
using namespace std;
int main()
{
    int E,M,H,S,C,total,percentage,average;
    cout<<"Enter the number of Subject English:";
    cin>>E;
    cout<<"Enter the number of subject Math:";
    cin>>M;
    cout<<"Enter the number of subject Hindi:";
    cin>>H;
    cout<<"Enter the number of subject Science:";
    cin>>S;
    cout<<"Enter the number of subject Computer:";
    cin>>C;
    total=E+M+H+S+C;
    cout<<"Total Marks="<<total<<endl;
    percentage=(total*100)/500;
    cout<<"percentage Marks="<<percentage<<endl;
    average=total/5;
    cout<<"average="<<average<<endl;
    
    //passing marks by every students
    if(percentage>=65)
    cout<<"first divison";
     else if(percentage>=45 && percentage<=60)
    cout<<"Second divison";
    else if(percentage>=35 && percentage<=45)
    cout<<"Third divison";
    else
    cout<<"sorry you are fail";

    



    return 0;
}