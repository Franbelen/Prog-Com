#include <bits/stdc++.h>
using namespace std;
int n,m,k;
// Ternary search en una frontera entre los dos arrays
int a,b;
int frontera(int k)
{
    int c = 0;
    for(auto e: a){if (e<k) c+=k-e}
    for(auto e: b){if (e>k) c+=e-k}

    return c;
}

int main()
{
cin >> n >> m;
int a[n], b[m];

for (int i = 0; i < n ; i++){cin >> k; a[i]= k;}
for (int j = 0; j < m ; j++){cin >> k; b[j]= k;}


int l = 0, r = 1e9,d;
    while(r-l > 2)
    {
        int d = (r -l)/3;
        int tl = l+ d;
        int tr = r- d;

        if (frontera(tl) < frontera(tr)){r = tr;}
        else l = tl;

    }
    cout<< frontera(d)<<"\n";
}