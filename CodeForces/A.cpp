#include <bits/stdc++.h>
using namespace std;
int t, c, k, s;

int main(){
    cin >> t;

    while (t--)
    {
        cin >> c >> k >> s;
        if (k <= c){
            cout << c << endl;
        } else if( k <= c+s)
        {
            cout << k << endl;
        } else
        {
            cout << 2*k-c-s << endl;
        }
    }
}