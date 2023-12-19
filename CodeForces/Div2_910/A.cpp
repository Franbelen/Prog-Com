#include <bits/stdc++.h>
using namespace std;
int t,l,b,c;
string s;
int main(){
    cin >> t;
    
    while (t--)
    {
        cin >> l >> b;
        cin >> s;
        c = 0;
        for (int i = 0; i < l; i++){
            if (s[i] == 'B') c++;
        }
        if (c == b) {
            cout << 0 << endl;
        } else if (c > b) {
        
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'B')
            {
                c--;
            }
            if (c == b)
            {
                cout << 1 << endl;
                cout << i+1 << " " << "A" << endl;
                break;
            }
        }
        } else {
        
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'A')
            {
                c++;
            }
            if (c == b)
            {
                cout << 1 << endl;
                cout << i+1 << " " << "B" << endl;
                break;
            }
        }
    }
    
    }
}