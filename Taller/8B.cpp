#include <bits/stdc++.h>
using namespace std;


int DP[1000001] ;
int N,x;
const int M = 1e9 +7;
vector<int> C;

int dp(int x)
{
    if(x <0) return 0;
    if(x==0) return 1;
    if(DP[x] != -1) return DP[x];

    int ans = 0;
    for(int i = 0;i<N;i++)
    {
        ans = (ans +dp(x-C[i]))%M;
    }
    return DP[x] = ans;

}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    memset(DP, -1, sizeof DP);

    cin >> N >> x;
    C.resize(N);
    for(int i=0;i<N;i++) cin >> C[i];

    cout << dp(x)<< "\n";
    
}