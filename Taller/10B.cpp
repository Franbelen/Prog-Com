#include <bits/stdc++.h>
using namespace std;


int P[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47}; 
bool cont = true;
int c = 0, i = 0;
string ans;
int main()
{
    while (c < 2 and i < 15 and cont)
    {
        cout << P[i]<< endl;
        cin >> ans;
        
        if( ans == "yes")
        {c++;
        if( i < 4)
        {
             
            cout << P[i]*P[i]<< endl;
            cin >> ans;
            if( ans == "yes"){cont = false;}
        }
        }
        i++;
    }
    if (c == 2 or !cont){cout << "composite"<< endl;}
    else{cout << "prime"<<endl;}
}