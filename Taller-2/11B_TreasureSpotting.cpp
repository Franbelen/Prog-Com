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
ll sgncross(point2d a, point2d b) {
    if(cross(a,b) > 0){
        return 1;
    } else if (cross(a,b) < 0){
        return -1;
    } else return 0;
}
ll dot(point2d a, point2d b) {
    return a.x * b.x + a.y * b.y;
}
ll norm(point2d a) {
    return a.x*a.x + a.y*a.y;
}
bool intersect(point2d a, point2d b, point2d c, point2d d) { // segmet AB inter segment CD
    bool inter = false;

    
    //cout << cross(b-a,d-a) << " " << cross(b-a,d-a) << endl;
    //cout << cross(c-d,a-d) << " " << cross(c-d,b-d) << endl;

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

    // 'p' is a passing point of the line and 'pq' is a perpendicular vector of the line.
    point2d p, q; 
    ll d;
    Halfplane() {}
    Halfplane(const point2d& a, const point2d& b) : p(a), q(b-a) {
           d = dot(q,p);
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

cin >> w >> p;
cin >> a >> b;

treasure = point2d(a,b);

for(ll i = 0; i < w; i++){
    cin >> a >> b;
    in_wall.push_back(point2d(a,b));
    cin >> a >> b;
    end_wall.push_back(point2d(a,b));
}
for(ll i = 0; i < p; i++){
    cin >> a >> b;
    pirates.push_back(point2d(a,b));
    cin >> x >> y;
    radios.push_back(norm(point2d(x,y) - pirates[i]));
    vista.push_back(Halfplane(pirates[i],point2d(x,y)));

}
for(ll i = 0; i < p; i++){

    v = true;

    if(norm(pirates[i]-treasure)> radios[i] or !vista[i].in(treasure)) v = false;
    
    for(ll j = 0; j < w; j++){
        // revisar paredes
        if (intersect(pirates[i],treasure, in_wall[j], end_wall[j])){
           
            v = false;
            break;
        }
    }
    
    for(ll j = 0; j < p; j++){
        
        // pirata j bloquea la vista del tesoro
        if(i == j) continue;
        if(collinear(pirates[i],treasure,pirates[j]) == 0){
            if (dot(pirates[i]-treasure,pirates[j]-treasure) <= 0){
                // Pi T Pj
                continue;
            } else if (norm(pirates[i]-treasure) > norm(pirates[j]-treasure)){
                v = false;
                // Pi Pj T
                break;
            }

        }
    }
    
    if(v){
      cout << "visible" << endl;  
    } else cout << "not visible" << endl;

}
}