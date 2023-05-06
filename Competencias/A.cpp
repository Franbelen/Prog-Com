#include <bits/stdc++.h>
using namespace std;

int T,c;
string cod = "codeforces", s;

int t;
int main()
{
    cin >> T;

    while (T--)
    {
    cin >> s;
    c = 0;
    for(int i = 0; i < 10; i++)
    {
        if (cod[i] != s[i]){c++;}
    }
    cout << c << "\n";
    }
    
}