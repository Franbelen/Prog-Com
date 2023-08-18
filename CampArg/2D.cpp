#include <bits/stdc++.h>
using namespace std;
int k,a, m;


int main()
{
m = 0;
cin >> k;
int lista[k];

for (int i =0; i < k; i++)
{
    cin >> a;
    if(a>m) m = a;
}

if (m > 25) { cout << m-25<<"\n";}
else cout << 0 << "\n";
}