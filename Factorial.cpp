#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fact=1,i;
    cout << "Enter the number - ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        fact *= i;
    }
    cout << "Factorial of the number is = " << fact;
    return 0;
}