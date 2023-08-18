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
        //cout << "t: " << t << "\n";
        costo = 0;
        ordenadas = 1;
        mov = 0;
        ovejas.clear();

        cin >> n;

        for(int i= 0; i < n; i++)
        {
            cin >> a;
            
            if(base == a)
            {
                ovejas.push_back(i);  
            }

        }

        int k = (ovejas.size()+1)/2;


        for(int f: ovejas)
        {
            
        }
    
}