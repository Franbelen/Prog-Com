#include <bits/stdc++.h>
using namespace std;

// acepted pero habia un unico max y min 

int times, n, a, b, m,M,cm,cM,r;
vector<int> fila, lmin, lmax, res;


int main()
{
cin >> times;
while(times --){
    res.clear(); lmax.clear();lmin.clear();fila.clear();
    cm=-1; cM= -1;
    m= 101; M = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a; fila.push_back(a);
        if (a <= m) m =a;
        if (a >=M) M = a;
    }
    
    for(int i = 0; i < n; i++)
    {
        if (fila[i] == m) {lmin.push_back(i);cm++;}
        if( fila[i] == M){lmax.push_back(i); cM++;}  
    }
    //soluciones

    res.push_back(max(lmin[0],lmax[0]));
    res.push_back(n - min(lmin[cm],lmax[cM])-1);
    res.push_back(n-lmin[cm]+lmax[0]);
    res.push_back(lmin[0]+n-lmax[cM]);

    cout << *min_element(res.begin(),res.end()) +1 << "\n"; 

}
}