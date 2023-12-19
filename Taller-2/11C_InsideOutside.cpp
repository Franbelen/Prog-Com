#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct point2d {
    ll x, y;
    point2d() {}
    point2d(ll x, ll y): x(x), y(y) {}

    point2d& operator+=(const point2d &t) {
        x += t.x;
        y += t.y;
        return *this;
    }
    point2d& operator-=(const point2d &t) {
        x -= t.x;
        y -= t.y;
        return *this;
    }
    
    point2d& operator*=(ll t) {
        x *= t;
        y *= t;
        return *this;
    }
    point2d& operator/=(ll t) {
        x /= t;
        y /= t;
        return *this;
    }
    point2d operator+(const point2d &t) const {
        return point2d(*this) += t;
    }
    point2d operator-(const point2d &t) const {
        return point2d(*this) -= t;
    }
    point2d operator*(ll t) const {
        return point2d(*this) *= t;
    }
    point2d operator/(ll t) const {
        return point2d(*this) /= t;
    }
};
point2d operator*(ll a, point2d b) {
    return b * a;
}

ll cross(point2d a, point2d b) {
    return a.x * b.y - a.y * b.x;
}
ll dot(point2d a, point2d b) {
    return a.x * b.x + a.y * b.y;
}
ll norm(point2d a) {
    return a.x*a.x + a.y*a.y;
}
bool intersect(point2d a, point2d b, point2d c, point2d d) { 
    // segment AB inter segment CD
    bool inter = false;

    // not paralelos
    if(sgncross(b-a,d-a)*sgncross(b-a,c-a) <= 0 and sgncross(c-d,a-d)*sgncross(c-d,b-d) <= 0){
        
        inter = true;
    }
    // paralelos
    if (cross(b-a,d-c) == 0) inter = false;
    
    return inter;
}

ll collinear(point2d a, point2d b,point2d c)
{
    // 2*area, collinear if 0
    ll k = a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y- b.y);
    return k;
}

struct Halfplane { 

    //  line and 'pq' is a perpendicular vector of the line. and r is a point in the semi-place wanted
    point2d p, q, r; 
    Halfplane() {}
    Halfplane(const point2d& a, const point2d& b, const point2d& r) : p(a), q(b) r(c){
    
    }

    // Check if point 'r' is in this half-plane. 
    // Every half-plane allows the region that HAS q
    bool in(const point2d& r) { 
        return  dot(q,r)-d >= 0 ; 
    }
};

ll w,p,a,b,x,y;
vector<point2d> in_wall,end_wall,pirates;
vector<Halfplane> vista;
vector<ll> radios;
point2d treasure;
bool v;
int main(){

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