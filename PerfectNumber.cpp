#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout << "Enter the number - ";
    cin >> n;
    for(i=1;i<n;i++)
    {
        int s = n%i;
        if(s == 0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        cout <<"Number is Perfect.";
    }
    else
    {
        cout << "Not Perfect Number.";
    }
    return 0;
}