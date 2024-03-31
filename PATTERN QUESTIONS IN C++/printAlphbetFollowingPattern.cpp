#include <iostream>
using namespace std;
int main ()
{
    int i,j;
    for(i='A';i<='D';i++){ //outer loop row
        for(j='A';j<=i;j++) //inner loop column
        {
          cout<<j;
        }
        cout<<endl;
    }
}