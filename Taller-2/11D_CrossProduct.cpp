#include<bits/stdc++.h>
using namespace std;

double cross_produc(double x1,double y1,double x2,double y2){
    return x1*y2-x2*y1;
}

int q;
double a,b,c,d,x,y;

int main(){
cin >> a >> b >> c >> d;
cin >> q;
c-=a;
d-=b;
while(q--)
{
cin >> x >> y;
double t = cross_produc(c,d,x,y);
if(t==0) cout << "C" << endl;
else if(t>0) cout << "I" << endl;
else cout << "D" << endl;
}
}