#include <bits/stdc++.h>
using namespace std;

int cases, n,a,b,c,d;
long long m = 1000000007;
queue<int> base_rep(int b, int base)
{
    queue<int> digitos;
    int r = b;
    while (r > 0)
    {   
        //cout << r%base;
        digitos.push(r%base);
        r = (r-r%base)/base;
        
    }
    //cout <<"\n";
    return digitos;
}

int main()
{
    cin >> cases;
    while(cases--)
    {
        cin >> a >> b;

        long long s = 1, e = a;
        queue<int> digitos = base_rep(b,2);
        while(!digitos.empty())
        {
            
            d = digitos.front();
            if(d == 1){s=(s*e)%m;}
            e = e*e;
            digitos.pop();
        }
        
        cout << s << "\n";
    }

}