#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
multiset<int> longitudes;
int n,m,j;
stack<pii> soluciones; // (tamaño grupo inclusive, solución)
int a, b;

void removelargo(int i,int j)
{
    if(j-i-1==0) return;
    longitudes.erase(longitudes.find(j-i-1));
}
void addlargo(int i,int j)
{
    if(j-i > 1)longitudes.insert(j-i-1);
}

int main()
{
    cin >> n;
    vector<vector<int>> indices(n);
    set<int> eliminados = {-1,n};
    longitudes.insert(n); longitudes.insert(0);
    vector<int> A(n);
    set<int> elementos;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
        elementos.insert(A[i]);
    }
    map<int, int> mp, invmp;
    for(auto u: elementos) {
        mp[u] = mp.size();
        invmp[mp[u]] = u;
    }
    for(int i = 0; i < n; i++)
    {
        indices[mp[A[i]]].push_back(i);
    }
    
    for(int i = 0; i < mp.size();i++)
    {
        //cerr << "i: " << i+1 << " " << indices[i].size()<< "\n";
        for(int j : indices[i]) {
            auto it = eliminados.lower_bound(j);
            int r = *it;
            int l = *prev(it);
            //cerr << "j: " << j << " l: " << l << " r: " << r << "\n";
            
            removelargo(l,r);
            addlargo(l,j);
            addlargo(j,r);
            //cerr << ":)";
            eliminados.insert(j);
            soluciones.push(pii(*longitudes.rbegin(),i));
            
        }
        //for(auto u: longitudes) cerr << u << " "; cerr<<"\n\n";
    }

//cerr << "soluciones: " << soluciones.size() << "\n";
tie(a,b) = soluciones.top();
soluciones.pop();

while(!soluciones.empty())
{
    tie(j,m) = soluciones.top();
    soluciones.pop();
    while(a<j)
    {
        cout << invmp[b] << " ";
        a++;
    }
    b = m;
}
while(a<n)
{
    cout << invmp[b] << " ";
    a++;
}
cout << "\n";
}
