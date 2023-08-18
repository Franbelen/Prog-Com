#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int m, n, k, a;
int error = 0;
int cont, c0= 0, c1 = 0;
bool continuar = true, unico = false;
set<int> jugadores = {0,1};
void nueva(int k)
{
    for(int i = 0; i < 1; i++)
    {
        cout << "0 = (" << k << ") ";  
    }
}

void agregar(int p)
{
    if (p%2) c1++;
    else c0++;

    if (c0 == n)
    {   
        unico = true; 
        p = 1;
        error++;
        jugadores.erase(0);
    }
    if (c1 == m)
    {
        unico = true; 
        p = 0;
        error++;
        jugadores.erase(1);
    }

    if (c0+c1 >m+n -3){ continuar = false;}
}
int indice(int p)
{
    if (unico)
    {
        p = *jugadores.begin();
    }

    if (p)
    {
        return c1;
    }
    else
    {
        return c2;
    }
}
int main()
{
    cin >> k >> m >> n;
    cont = 0;
    vector<vector<int>> numeros(2);
    for(int i = 0; i < m; i++)
    {
        cin >> a;
        if (!a)
        {
            cont--;
        }
        if (a > 0)
        {
            if (cont) numeros[0].push_back(cont);
            numeros[0].push_back(a);
            cont = 0;
        }
    
    }
    if (cont) numeros[0].push_back(cont);
    cont = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if (!a)
        {
            cont--;
        }
        if (a > 0 and cont < 0)
        {
            if (cont) numeros[1].push_back(cont);
            numeros[1].push_back(a);
            cont = 0;
        }
    }
    if (cont) numeros[1].push_back(cont);

int p = 0, i;

while(error < 2 and continuar)
{   
    cout << "debug:" <<  k << " " << p << " " << c0 << " " << c1 << endl;

    i = indice(p);
    cout << "valor: " << numeros[p][i] << endl;
    if (numeros[p][i] < 0)
    {
        k-= numeros[p][i];
        
        agregar(p);
        
        nueva(-numeros[p][i]);
    }
    if (numeros[p][i] > 0)
    {
        if (k > numeros[p][i])
        {
            cout << numeros[p][i] << " ";
            agregar(p);
        }
        else
        {
            p = (p+1)%2;
            error++;
            cout << "error: " << error << endl;
            continue;
        }
    }
    if (numeros[p][i] = 0){agregar(p);}
    
}
}