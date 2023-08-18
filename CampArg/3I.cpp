#include <bits/stdc++.h>
using namespace std;

int n, i, b,a;
long long c;
string s;

int main()
{
c = 0;
cin >> s;
if (size(s)>1)
{
    for(int i = size(s)-2; i >-1 ;i--)
{
    b = stoi(s.substr(i,2));
    a = stoi(s.substr(i,1));
    
    if (b%4 == 0) 
    {
        c+= i+1;
    }
    if (a%4 == 0) c+= 1;
    //cout << a << " " << b << " " << i << " "<< c << "\n";
}

}
if (stoi(s.substr(size(s)-1,1))%4 == 0) c++;
cout << c << "\n";



}
