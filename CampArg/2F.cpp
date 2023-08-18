#include <bits/stdc++.h>
using namespace std;
int l,k,r,d,times,c;

int xi,yi,ri,R,D;
double L,x,y,z,w;
int main()
{
c = 0; // cuenta salames que no sirven
cin >>r>>d;
R = (r-d)*(r-d);
D = r*r;

cin >> times;
int n = times;
while(times--)
{
cin >> xi >> yi >> ri;


L = sqrt(xi*xi +yi*yi);
if (r-d > L or L > r){c++; // centro del salame fuera de la crust
}else 
{
x = xi * (L-ri)/L;
y = yi * (L-ri)/L;
z = xi * (L+ri)/L;
w = yi * (L+ri)/L;
//cout << x*x +y*y << " " << R << " "<< z*z+w*w << " " << D << "\n";
//cout << (x*x +y*y < R or z*z+w*w >D) << "\n";
if (x*x +y*y < R or z*z+w*w >D) c++;
}

}
cout << n - c <<"\n";

}