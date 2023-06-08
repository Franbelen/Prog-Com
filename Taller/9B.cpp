// DP

#include <bits/stdc++.h>
using namespace std;


int N, b, x;
int H[1000];
int S[1000];

int main()

{
cin >> N >> x;
int DP[N+1][100001];
memset(DP, 0, sizeof DP);   

for(int i = 0; i < N; i++){cin>> H[i];}
for(int i = 0; i < N; i++){cin>> S[i];}

for(int i = N - 1; i >=0; i--)
    for (int y = 100000; y >= 0; y--)
        {
            // no comprar el siguiente libro
            int ans = DP[i+1][y] ;
            // comprar el siguiente libro
            if ( y >= H[i])
            {
                ans = max(ans, DP[i+1][y - H[i]]+ S[i]);
            }
            DP[i][y] = ans;
        }

cout << DP[0][x];

}