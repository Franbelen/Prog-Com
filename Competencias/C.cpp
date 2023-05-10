#include <bits/stdc++.h>
using namespace std;

int T,L;
vector<int> A, B, P;
string bs;
int p,q, ans;
int i,a,b,costo;

void backtracking(int i, int a,int b, int costo)
{
    if (a and b)
    {
        ans = min(ans,costo);
    }
    if(i>=L){return;}

    if ((A[i] and not a) or (B[i] and not b))
    {
    backtracking(i+1, a or A[i],b or B[i],costo + P[i]);
    }
    backtracking(i+1,a,b,costo);
}


int main()
{
    
    cin >> T;
    while (T--)
    {
    
    cin >> L;
    A.clear();
    B.clear(); 
    P.clear();
    ans = 200001;
    
    for(int j = 0; j < L; j++)
    {
        cin >> p >> q;

        P.push_back(p);
        if (q >= 10){A.push_back(1); B.push_back(q-10);}
        else{A.push_back(0);B.push_back(q);}
        
    }
    costo = 0;
    if (L == 1)
    {
        if (A[0] and B[0]){cout << P[0] << "\n";}
        else{cout << -1 <<"\n";}
    }
    else
    {
    backtracking(0,0,0,costo);
    if(ans == 200001){cout << -1 <<"\n";}
    else{cout << ans << "\n";}
    }
    }
    
}
