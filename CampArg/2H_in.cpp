#include <bits/stdc++.h>
using namespace std;
int a;
bool posible = false;

int main()
{
int pal[4];
for(int i = 0; i < 4; i++)
{
    cin >> a;
    pal[i] = a;
}
if (pal[0] ==  pal[3]) {posible = true;}

if (pal[2] >0 and pal[0]*pal[3] == 0){posible = false;}

if (posible){cout << 1 << "\n";}
else cout << 0 << "\n";
}