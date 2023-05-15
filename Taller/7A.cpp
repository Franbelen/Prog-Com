#include <bits/stdc++.h>
using namespace std;


string  b, a,s;
int M,c; 

int main()
{
    a= "";
    c = 0;
    cin >> s;
    for (int i =0 ; i < s.length(); i++)
    {
        b = s[i];
        
        if (b == a){ c++;}
        else
        {
            M = max(c,M);
            a = b;
            c = 1;
        }
    }
    M = max(c,M);
    cout << M << "\n";
}