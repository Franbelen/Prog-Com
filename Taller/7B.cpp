#include <bits/stdc++.h>
using namespace std;


int b, a,s;
long long c, n; 

int main()
{
    cin >> n;
    n--;
    c = 0;
    cin >> a;
    //cout << a << "\n";
    while(n--)
    {
        cin >> b;
        if (a >b){c += a-b;}
        else{a = b;}
        //cout << max(a,b)<< "\n";
        
    }
    
    cout << c << "\n";
}