#include <bits/stdc++.h>
using namespace std;

int t = 1;
string c;
int l =0,r=101,m;

int main() 
{
    
    while (t)
    {
        if ( c == "<"){r = m;}
        if (c == ">="){l = m+1;}
        m = (l+r)/2;
        if(l == r)
        {
            cout << "! " << m-1 << endl;
            t = 0;
        }
        else{cout <<  m << endl;}
        cin >> c;
        
    }
   
}
