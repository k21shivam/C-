#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
int main()
{
  int V,r,h;
  cout << "Enter the radius and height of CONE - ";
  cin >> r >> h;
  V = (pi*r*r*h)/3;
  cout << "Volume of cone is " << V;
  return 0;
}