#include <bits/stdc++.h>
using namespace std;

int c,a,b;

int main() {
    
    cin >> c;
    for(int i = 0; i< c;i++)
    {
    cin >> a >> b;

    if(a%b == 0) cout << 0 << "\n";
    else cout << b -a%b<<"\n";
    }
}