#include <bits/stdc++.h>
using namespace std;
int l,k,r,d,times,c;

int xi,yi,ri;
double L, ep = 1e-9;
int main()
{
c = 0; 
cin >> r >> d >> times;
int n = times;
while(times--)
{
    cin >> xi >> yi >> ri;


    L = sqrt(xi*xi +yi*yi);
    if (r-d -ep<= L -ri and L+ri <= r+ep) c++; 
}
cout << c <<"\n";
}