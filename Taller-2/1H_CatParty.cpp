#include<bits/stdc++.h>
using namespace std;

map <double,double> ribons;
set<double> colors;
double d,t,a,m,actual,r,den;


int main(){

cin >> d;
m = 0;
actual = 0;
for (int i = 1; i <= d; i++)
{
    cin >> a;
    ribons[a]++;
    m = max(m,ribons[a]);
    colors.insert(a);

    if (colors.size() == 1){den = 1;}
    else {den = colors.size() - 1;}

    if (m > i/den + 1)
    {
        //cout << "al agua " << i << endl;
        continue;
    } else {
        if (m == 1){
            actual = i;
           // cout << "Caso 0 : " << i << endl;
        } else if (m == (i-1)/colors.size()+1){
           // cout << "Caso 1 : " << i << endl;
            double s = 0, r = 0;
            t = (i-1)/colors.size();
            for (auto i : colors)
            {
                if (ribons[i] == t){
                    s++;
                }else if (ribons[i] == t + 1){
                    r++;
                }else {r=2; break;}
        
                if (r > 1){break;}
            }
            if (r == 1){ actual = i; }
        } 
        if (m == (i-1)/den){
            //cout << "Caso 2 : " << i << endl;
            double s = 0, r = 0;
            t = (i-1)/den;
            for (auto i : colors)
            {
                if (ribons[i] == 1){
                    s++;
                }else if (ribons[i] == t){
                   r++;
                } else {s =2; break;}
                if (s > 1){break;}
            }
            if(s == 1) {actual = i;}
        }
    
}

}
cout << actual << endl;

}