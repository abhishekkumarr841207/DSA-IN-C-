/*Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]*/
#include<iostream>
using namespace std;
int main()
{
    int marks[9]={12,13,14,35,16,17,18,19,20};
    cout<<"roll number : ";
    for(int i=0;i<9;i++)
    {
        if(marks[i]<18)
        {
            cout<<i+1<<",";
        }
    }
}