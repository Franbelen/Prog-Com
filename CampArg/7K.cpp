#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int n,k,a;
map<int,long long> mp;
int main()
{
    cin >> n >> k;
    int acum[n+1];

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        acum[i+1] = acum[i] + a;
    }

}
   