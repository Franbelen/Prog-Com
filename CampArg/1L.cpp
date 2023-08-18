#include <bits/stdc++.h>
using namespace std;

set<long long> nogustar;
map<long long, long long> gustar;
int N,t,s,c;
long long a,k = 0 ;

int main() 
{
    cout << fixed << setprecision(0);
    c = 0;
    cin >> N;

    while (N--)
    {
        cin >> t>> s;
        if (t == 1)
        {
            c++;
            for ( long long i = 0; i < s ; i++)
                {
                    cin>>a; 
                    gustar[a]++;
            
                }
        }
        
    
        if( t == 2 ) for ( int i = 0; i < s ; i++){cin>>a; nogustar.insert(a);}
    }
for(auto e: gustar)
{
    if(e.second == c and !nogustar.count(e.first)){k++;}
}
   
    
if(c){ cout<< k <<"\n";}
else{ cout<< (long long)1e18-(long long)size(nogustar)<<"\n";}
}