#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int mov,t, ordenadas,n,acum;
set<int> ovejas;
const char base = '*';
char a;
int l,r;
int main()
{
    cin >> t;
    while(t--)
    {
        cout << "t: " << t << "\n\n";
        acum = 0;
        ordenadas = 0;
        mov = 0;
        ovejas.clear();

        cin >> n;

        for(int i= 0; i < n; i++)
        {
            cin >> a;
            
            if(base == a)
            {
                ovejas.insert(i);  
                acum += i;
            }

        }

        int k = ovejas.size();
        int prom;
        if (k) prom = acum/k;
        else int prom = 0;
        
        l = prom; r = prom;
        if (ovejas.count(prom)) ovejas.erase(prom); r++;
        while(!ovejas.empty())
        {
            k = *ovejas.lower_bound(l);
            if (k < l)
                mov+= abs(k-l);
                ovejas.erase(k);
                l--;
            k = *ovejas.upper_bound(r);
            if (k > r)
                mov+= abs(k-r);
                ovejas.erase(k);
                r++;
        cout << mov << "\n";
        }
        cout << mov << "\n";
    }
}