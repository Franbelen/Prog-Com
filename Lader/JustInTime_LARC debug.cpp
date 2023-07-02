#include <bits/stdc++.h>
using namespace std;

int n,m,c;
int mp;
int j,k;
int main(){
    
    c = 0;
    cin >> n;
    m = ceil(sqrt(n));
    int dp[m+1],target[m+1];
    vector<int> primes;

    for(int i = 2; i <=m;i++)
    {
        if (dp[i] != 1)
        {
        primes.push_back(i);
        c++;
        int k = i;
        while(i*k<=m){dp[i*k]=1;k++;}
        }
    }
    mp = 0;
    int k = 1;
    cout << m << "\n";
    while(!mp)
    {
        // buscar primos entre N - k*sqrt(n) , N - (k-1)*sqrt(n)
        memset(target,0,sizeof target);
        int sup = n-(k-1)*m;
        int inf = max(n-k*m,0);
        cout << inf << " , "<< sup<< "\n";
        for(int i = 0; i < c;i++)
        {
        int p = primes[i];
        if (inf%p == 0) j =inf/p +1;
        else j = inf/p ;
        while(j*p<= sup)
        {

            target[p*j-inf] = 1;
            j++;
        }
        }
        cout << target[m] << "," << m << "\n";
        for(int i = m; i >= 0; i--)
        {
           
            if (target[i] == 0)
            { 
                cout << inf +i << "\n";
                }
        }
        k++;
        if (k = m) mp = -1;
    }
    for(int i = 0; i < c;i++) cout << primes[i]<< " ";


    cout << mp << "\n";
}