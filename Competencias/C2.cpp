#include <bits/stdc++.h>
using namespace std;

int T,L;
vector<int> A, B, P;
string qs;
int p,q, ans;
int i,a,b,costo;

void backtracking(int i, int a,int b, int costo)
{
    if (a and b)
    {
        ans = min(ans,costo);
    }
    if(i>=4){return;}

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
        qs = to_string(q);
        
        if (qs == "00")
        {
            P[0] = min(p,P[0]);
            A[0] = 0;
            B[0] = 0;
        }

        if (qs == "01")
        {
        P[1] = min(p,P[1]);
        A[0] = 0;
        B[0] = 1;
         }
        if (qs == "10"){
        P[2] = min(p,P[2]);
        A[0] = 1;
        B[0] = 0;}
        if (qs == "11"){
        P[3] = min(p,P[3]);
        A[0] = 1;
        B[0] = 1;}
    
        
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
