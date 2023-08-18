#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int n, a,b,c,q;
vector<int> entrada,salida;
set<int> raices;

vector<vector<int>> graph; 

void eulerstour(int a)
{
// calcula el tiempo de entrada y salida de cada nodo    
    if (entrada[a] == -1)
    {
        //cout << "vec: " << a << " raiz: " << par << "\n";
        entrada[a] = c;

        for (int i = 0; i < graph[a].size(); i++)
        {
            c++;
            eulerstour(graph[a][i]);
        }
        salida[a] = c;
        c++;
    }
}

int main() 

{
c = 0;
cin >> n >> q;

salida.resize(n+1);
entrada.resize(n+1,-1);
graph.resize(n+1);


for(int i = 0;i < n; i++)
{
    cin >> a;
    if (a !=-1) 
    {
        graph[a].push_back(i);
    }
    else
    {
        raices.insert(i);
    }
    
}

while (q--)
{
    cin >> a >> b;
    for (auto i : raices)
    {
        eulerstour(i); 
    }

    if (entrada[b] <= entrada[a] and salida[b] >= salida[a])
        { cout << "Yes" <<"\n";}
    else cout << "No" <<"\n";
    
}


}
