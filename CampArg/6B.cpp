#include <bits/stdc++.h>
using namespace std;

int a,b,x,c;
queue<int> num;
int main()
{
    cin >> a >> b >> x;
    int n = a+b;
    if (a <b) c = 1;
    else c = 0;
    while(x--)
    {
        if (!c) a--;
        else b--;
        cout <<c;
        c++;
        c = c%2; 
    }
    
    if (!c)
    {
        if (b>0) {while(b--) cout <<1;}
        if (a>0) {while(a--) cout <<0;}
    }
    
        if (a>0) {while(a--) cout <<0;}
        if (b>0) {while(b--) cout <<1;}

cout << "\n";
}