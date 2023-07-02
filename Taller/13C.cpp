#include <bits/stdc++.h>
using namespace std;
// primos entre [a,b]
int n,m,c,a,b;
int mp;
int j,k;
int times;

int main(){

    cin >> times;

    for(int j = 0; j < times ;j++)
    {
        cin >> a >> b;
    
        c = 0;
        m = ceil(sqrt(b));

        int dp[m+1],target[b-a+1];
        vector<int> primes;
        dp[1] = 1;

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

        // buscar primos en [a,b]
        memset(target,0,sizeof target);
        if(a ==1) target[0] = 1 ;
        for(int i = 0; i < c;i++)
        {
        int p = primes[i];
        int k = a/p;
        while(k*p<= b)
        {
            if (p*k != p) target[p*k-a] = 1;
            k++;
        }
        }

        for(int i = 0; i <=b-a; i++)
        {
           if (target[i] == 0){cout << a+i<< "\n";}
           
        }
        
        if(j != times -1) cout << "\n";
    }
}