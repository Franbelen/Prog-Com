#include <bits/stdc++.h>
using namespace std;
// Revisar si es rectangulo
typedef pair<int, int> ii;
set<ii> puntos;
set<int> v,h;
set<pair<ii,ii>> segmentos;

int a,b,c,d;
bool deg = false;
int main()
{
for(int i = 0; i <4;i++)
{
    cin >> a >>b >> c >> d;
    puntos.insert(ii(a,b));
    puntos.insert(ii(c,d));
    v.insert(a); v.insert(c);
    h.insert(b);h.insert(d);
    if (a!=c and b!=d) deg = true;
    if (a == c and b == d) deg = true;
    segmentos.insert(pair(ii(a,b),ii(c,d)));
    segmentos.insert(pair(ii(c,d),ii(a,b)));
}
if (size(v)!=2 or size(h)!=2){deg = true;}
if (size(puntos) == 4 and size(segmentos) ==8 and !deg) cout <<"YES\n";
else cout << "NO\n";
}