#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int ac,a,b;
int t, n, total;
int acumulados[1]

int sufijo(int i)// i inclusive
{
    return acumulados[n] - acumulados[i-1];
}
int prefijo(int i)// i inclusive
{
    return acumulados[i];
}
int main()
{
cin >> t;
while(t--)
{
    ac = 0;
    cin >> n;
    acumulados.clear();
    acumulados.resize(n+1,0);

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        ac += a;
        acumulados[i+1] = ac;

    }
}
}
   