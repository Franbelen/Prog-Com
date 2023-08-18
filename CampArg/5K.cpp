#include <bits/stdc++.h>
using namespace std;
int n,t,a,i,j,m= 0;
long long s = 0;
vector<long long> acomulados; 
int main()
{
    cin >> n >> t;

    acomulados.push_back(0);
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if (a >t){n--;continue;}
        s += a;

        acomulados.push_back(s);
    }

    j = 0; i = 0;
    while (i <= n)
    {
        if (acomulados[i]-acomulados[j] <= t) 
        {
            i++;
            m = max(m,i-j-1);
            
        }
        else
        {
            j++;
        }
        
    }

    cout << m << endl;
}