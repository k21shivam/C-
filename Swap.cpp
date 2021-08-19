#include<iostream>
using namespace std;
int main()
{
    int a,b,temp=0;
    cout << "Enter the numbers : " ;
    cin >> a >> b;
    cout << "Before Swapping - a = " << a << "\tb = " << b;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter Swapping - a = " << a << "\tb = " << b;
    return 0;
    }