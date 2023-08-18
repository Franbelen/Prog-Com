#include <bits/stdc++.h>
using namespace std;

string S, tipo, actual,base = "QA";
long long suma;
vector<int> contadores, acumulados;
int contador, k, q,s;
string in;
int main()
{
    cin >> S;
    tipo = "";
    contador = 0, s = 0, q = 0;
    k = -1;
    for(int i= 0; i< S.length(); i++)
    {   
        if (k == 1) in = tipo;
        actual = S[i];
        if (actual == "A" or actual == "Q")
        {
            if (actual == tipo) contador++;
            else
            {   
                tipo = actual;
                contadores.push_back(contador);
                k++;
                contador = 1;
                s += q;
                q = 0;
                acumulados.push_back(s);
            }
        if (actual == "Q") q++;
        }
    }
s+=q;
contadores.push_back(contador);

int i = 0;
if( in == "A") i++;
suma = 0;


while(i < k-1)
{
    //cout << acumulados[i]*contadores[i+1]*(s-acumulados[i+1]) << "\n";
    suma += acumulados[i]*contadores[i+1]*(s-acumulados[i+1]);
    i+=2;
}
if (tipo == "Q") suma += acumulados[i]*contadores[i+1]*(s-acumulados[i+1]);
//cout << acumulados[i]*contadores[i+1]*(s-acumulados[i+1]) << "\n";
cout << suma << endl;
}
