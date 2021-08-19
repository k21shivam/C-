#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the numbers : " ;
    cin >> a >> b;
    cout << "Before Swapping - a = " << a << "\tb = " << b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "\nAfter Swapping - a = " << a << "\tb = " << b;
    return 0;
}