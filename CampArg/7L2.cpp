#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int m, n, k, a;
int error = 0;
int cont, c0= 0, c1 = 0;
bool continuar = true, unico = false;
void nueva(int k)
{
    for(int i = 0; i < 1; i++)
    {
        cout << "0 = (" << k << ") ";  
    }
}

void agregar(int p)
{
    if (p%2) c0++;
    else c1++;

    if (c0 == n){unico = true; p = 1; error++;}
    if (c1 == m){unico = true; p = 0;error++;}

    if (c0+c1 >m+n -3){ continuar = false;}
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

for(int i = 0; i< 2;i++)
{
    int y = numeros[i].size();
    for(int j = 0;j < y; j++)
    {
        cout << numeros[i][j] << " ";
    }
    cout << endl;
}
}