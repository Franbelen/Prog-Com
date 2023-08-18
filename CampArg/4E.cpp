#include <bits/stdc++.h>
using namespace std;


int a ,b, c, k;
int c1, c2, d1, d2;
bool posible = false;
int main()
{
    cin >> a >> b;
    c = gcd(a,b);
    a/=c;
    b/=c;

    while(!(a%3)) {c2++;a/=3;}
    while(!(a%2)){c1++;a/=2;}

    while(!(b%3)) {d2++;b/=3;}
    while(!(b%2)){d1++;b/=2;}

    if (c1 <= d1 and c2 <= d2 and a == b) {posible = true;}


    if (posible){ cout << d2-c2+ d1-c1 << "\n";}
    else cout << -1 << "\n";
}
