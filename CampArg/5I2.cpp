#include <bits/stdc++.h>
using namespace std;

int n,a,b,c;
int INF = -1000000;
int DP[4001];

int dp(int res)
{
   
    if (res== 0) return 0;
    if (res < 0) return INF;
    //cout << res << " " << DP[res] << endl;
    if (DP[res]!=-1) return DP[res];

    DP[res] = max( dp(res-a) , max( dp(res-b) , dp(res-c)))+1;
    
    //cout << res << " " << DP[res] << endl;
    return DP[res];
}

int main()
{
cin >> n >> a >> b >> c;

memset(DP,-1,sizeof(DP));
dp(n);
cout << DP[n] << "\n";
}


