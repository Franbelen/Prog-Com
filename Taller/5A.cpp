#include <bits/stdc++.h>
using namespace std;

vector<int> V, N;
int S, b, test, O;
int M;
bool Ans;



int main()
{
    cin >> test;
    M = 10;
    // repetición
    while (test--)
    {
        //cout << "Test: " << test << "\n";

        N.clear(), V.clear();
        for (int j = 0; j<10 ; j++){N.push_back(j);}
        
        for (int i = 0; i < M; i++)
        {
            cin >> b;
            V.push_back(b);
    
        }
        cin >> O;

        Ans = false;

        while ((not Ans) and next_permutation(N.begin(),N.end()))
        {
            S = 0;
            for (int i = 0; i< M; i++){S += (V[i]*N[i]);}
            if (S == O){Ans = true;}
            
        }
        if (Ans)
        {
            for (int i = 0; i < M -1; i++){cout << N[i] << " " ;}
            cout << N[M-1];
        }
        else{ cout << -1;}

        cout << '\n';
    }
}