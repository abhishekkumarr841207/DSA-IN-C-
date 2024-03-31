#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the value to find absolute value:";
    cin >> num;
    if (num < 10)
    {
        num = (-num);
    }
    cout << "Absolute value is :" << num << endl;
    return 0;
}