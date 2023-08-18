#include <bits/stdc++.h>
using namespace std;

int n,a,b,c;
int INF = -10000;
int DP[1][1][1];

int dp(int i,int j,int k,int res)
{
    if (i==0 and j==0 and k==0) return 0;
    if (res > n) return INF;
    if (DP[i][j][k]!=-1) return DP[i][j][k];

    DP[i][j][k] = max( dp(i-1,j,k,res-a) , max( dp(i,j-1,k,res-b) , dp(i,j,k-1,res-c) ) )+1;


    return DP[i][j][k];
}

int main()
{
cin >> n >> a >> b >> c;
// cambiar dp a largos a,b,c 

int DP[n/a+1][n/b+1][n/c+1];

memset(DP,-1,sizeof(DP));

cout << dp(n/a,n/b,n/c,0) << endl;
}


