#include <bits/stdc++.h>
using namespace std;

int n,u,v; 
int k;
set<int> der, izq;

int main()

{
cin >> n;
int vec[n+1];
int lado[n+1];
memset(vec,0,sizeof(vec));
k = 1;
cin >> u >> v;
lado[u] = 1;
lado[v] = -1;
der.insert(1); izq.insert(-1)
n--;
while(n--)
{
    cin >> u >> v;
    if (vec[u] and !vec[v]){ lado[v] = -lado[u]; 
    }else if (vec[v] and !vec[u]){lado[u]= -lado[v]; 
    }else if (vec[v] and vec[u]){ if der.count(lado[u]){izq.insert(lado[v])} else}
    {   
        
    }
vec[u]++; vec[v]++;
}

}
