#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int n,m,a,p;
vector<int> votantes[3005];
int costo(int f)
{
    int cs = 0;
    
    for(int i = 2; i < m; i ++)
    {
        if mp(i) > f
        {
            for(int j = 0; j < mp(i)-f; j++)
            {
                cs += *precios[i].begin();
                precios[i].erase(precios[i].begin());
            }
        }

     
    }
}
int main()
{
cin >> n >> m;

for(int i = 0; i < n; i++)
{
    cin >> a>> p;
    S.insert(pii(p,a));

    precios[a].insert(p);

    mp[a]++;

}

    // busqueda terciaria en frontera
    int l=0,r= m;

    while(r-l > 2)
    {
        int m1 = l + (r-l)/3;
        int m2 = r - (r-l)/3;

        costo(m1) < costo(m2) ? r = m2 : l = m1;
    }
}