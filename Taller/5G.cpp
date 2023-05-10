#include <bits/stdc++.h>
using namespace std;

vector<int> V, v;
int T, C, b, m;

// funcion
vector<int> I, J;
int s = 0;
set<vector<int>> Sol;

void recursive( int i, int j)
    {
        if (s == T)
        {   
            J.clear();
            for(int k = 0; k< i; k++)
            {
                J.push_back(I[k]);
            }
            Sol.insert(J);
    
        }

        if (j == C){ return;}
       
        I.push_back(V[j]) ;
        s += V[j];
        recursive(i+1,j+1);

        s-=V[j];
        I.pop_back();
        recursive(i,j+1);
        
    }

int main()
{
while (cin >> T)
{
    Sol.clear();V.clear();I.clear();s = 0;
    cin >> C; 
    for(int i=0; i < C;i++)
    { 
        cin >> b; V.push_back(b);
    }

    recursive(0,0);


cout << "Sums of "<< T <<":\n";
int sz = Sol.size();
if(sz == 0){cout << "NONE \n";}


for(int i=0; i < sz; i++)
{
    v = *Sol.rbegin();
    for(int k=1; k< v.size() ;k++)
    {
        cout << v[k-1] << "+";
    }
cout << v[v.size()-1] << "\n";
Sol.erase(*Sol.rbegin());
}
}
}

