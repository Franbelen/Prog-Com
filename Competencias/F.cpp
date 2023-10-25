#include <bits/stdc++.h>
using namespace std;

set<long long> sol;
long long N;

bool cambiodebase(long long n,long long b)
{
    int k = 0;
    vector<long long> digitos;
    while( n > 0)
    {
        digitos.push_back(n%b);
        n/=b;
        k++;
    }

    for(long long i = 0; i < k/2; i++)
    {
        if (digitos[i] != digitos[k-i-1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
cin >> N;
long long K = sqrt(N)+1;

for ( long long i = 2; i < K; i++)
{
    // cambio de base
    if (N%i == 0) continue;
    if (cambiodebase(N,i)) sol.insert(i);
}
for ( long long i = 2; i < K; i++)
{
    if ((N-i)%i == 0 and (N-i)/i > i)
    {
        sol.insert((N-i)/i);
    }

}
sol.insert(N-1);

if (N==2)
{
    cout << "*" << endl;
} else
{

for (auto i : sol)
{
    cout << i << " ";
}
cout << endl;
}
}