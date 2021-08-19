#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int count=0,i;
    for(i=1;i<=n;i++)
    {
        int t = n%i;
        if(t==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout << "This is Prime Number.";
    }
    else
    {
        cout << "This is not Prime Number.";
        
    }
    return 0;
}