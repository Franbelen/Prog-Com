#include <bits/stdc++.h>
using namespace std;


int main()
{
    set<int> s = {10,5,3};
    s.erase(5);
    // falla si intentas eliminar inexistente
    //s.erase(8);
    //for(auto e: s) cout << e << " ";
  
    cout <<*s.lower_bound(2) ;
}