#include <bits/stdc++.h>
using namespace std;

int n;
int main()
{
    //cin >> n;
    n = 3;
    // recorrer bitsmask de largo n para n <= 20
    for(int i = 1; i < (1<<n); i++) {
        vector<int> C;
        for(int j = 0; j < n; j++) {
            // i and (2^j) > 0 chequea que compartan la misma potencia de dos
            if(i & (1<<j)) C.push_back(j);
        }
        for(auto u: C) cout<<u<<' '; cout<<'\n';
    }
    // 3 = 2^0 + 2^1 & (2^0) = 1 
    // 3 = 2^0 + 2^1 & (2^1) = 1
    // 3 = 2^0 + 2^1 & (2^2) = 0  

    // 100 | 001 = 101
    // operaciones bitwise
    // | or
    // & and
    // >> shift right
    // << shift left
    // ^ xor
    // ! not
    // ~ complemento a 2 (~101= 011) -> a + comp2(a) = 0 (el negativo (primer bit da signo))
    //  complemento a 1: invertir los bits}
    // complemento a 2: complemento a 1 + 1
}

