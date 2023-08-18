#include <bits/stdc++.h>
using namespace std;

int min = 1001, max = 1999
int a,b,cont, t,st,n;
bool continuar = true;

vector<int> contadores;
int main()
{
    cin >> n;
    cont = 1;
    
    for(int i = 0; i < n; i++)
    {
    
        cin >> b;
        int m =|b-a|;
        if (m < min) cont ++;
        if (m > max)
        {
            contadores.push_back(cont);
            cont = 1;
        }
        
        min = *contador.min_element();
        max = *contador.max_element();

        if (2 > min or 3 < max) cout << "Imposible";
        

    }
}