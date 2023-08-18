#include <bits/stdc++.h>
using namespace std;

int x,y,r;
int L;

int main()
{
    r = 1;
    cin >> x >> y;

    L = floor(sqrt(x*x+y*y));
    if (sqrt(x*x+y*y) - L == 0){cout << "black" << endl;}
    else
    {
    if(L%2) r = -1;

    if (x*y < 0) r*=-1;

    if(r == 1) cout << "black" << endl;
    else cout << "white" << endl;
    }
}