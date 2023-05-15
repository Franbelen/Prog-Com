#include <bits/stdc++.h>
using namespace std;


long long b, a, m, r;
long long times; 

int main()
{
    cin >> times;
    
    while(times--)
    {
    cin >> a;
    cin >> b;
    m = max(a,b);
    
    int t = m*m - m + 1 ;
    if (m%2 == 0)
    {
    if (a<b){r = t -(m-a);}
    else if(a>b){r = t +(m-b);}
    else{r = t ;}
    }
    else
    {
        if (a<b){r = t +(m-a);}
        else if(a>b){r = t -(m-b);}
        else{r = t ;}
    }
    cout << r <<"\n";
    }
}