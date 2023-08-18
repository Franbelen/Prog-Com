#include <bits/stdc++.h>
using namespace std;


int times, n, a;
set<int> pares;
int c;
int main()
{
    cin >> times;
    while (times --)
    {
        
        cin >> n;
        pares.clear();
        c = 0;
        while(n--)
        {
            cin >>a;
            if (!(a%2)) pares.insert(-a);
        }
        
        while (!empty(pares))
        {
            a = *pares.begin();
            pares.erase(a);
            a/=2;
            c++;
            if (!(a%2)){pares.insert(a);}
        }
    
        cout << c << "\n"; 
    }

}
