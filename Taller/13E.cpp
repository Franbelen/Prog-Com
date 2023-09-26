#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;

    if (n%2 == 1)
    {
       cout << 2 << "\n";
       cout <<  9 << " " << n-9<<"\n";
    }

    else 
    {
       cout << 2 << "\n";
       cout << 4 << " " << n-4  <<"\n";
    }
    
}