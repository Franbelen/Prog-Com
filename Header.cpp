#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#pragma GCC optimize("Ofast")
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll,ll> pll;
typedef pair<int,int> ii;
typedef vector<pll> vp;
typedef double db;
#define INF 1e17
#define INF32 INT_MAX
#define EPS 1e-7
#define ALL(x) x.begin() , x.end()
#define ALLR(x) x.rbegin() , x.rend()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define PI acos(-1.0)
#define pb push_back
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define repx(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define sz(x) ((int)(x).size())
#define DBG 1

#define cerr \
    if (DBG) cerr

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	srand((unsigned int) time(0));

	// Code here

	// ulimit -s 1048576 more stack size 1gb
	// g++ -std=c++11 Code1.cpp && a.exe < in > out
	cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";

	
	double f =3.14159;
	//fijar precision de double 
  	cout << setprecision(2) << f << '\n';

	return 0;
}

// Compile:
	// g++ Code1.cpp && ./a.out < in > out
