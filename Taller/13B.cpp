#include <bits/stdc++.h>
using namespace std;

int n,c;

int main()
{
    cin >> n;
    int dp[n+1];
    memset(dp,0,sizeof dp);
    dp[1] = 1;
    for(int i = 2; i <n;i++)
    {
        if (dp[i]== 0)
        {
        dp[i] =-1;
        int k = 1;
        while(i*k<=n){dp[i*k]++;k++;}

        }
    }

for(int j = 6; j <= n; j++)
{
    if(dp[j]==2)c++;
}
cout << c << "\n";
}