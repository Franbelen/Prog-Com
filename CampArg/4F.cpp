#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define pii pair <ll,int>;
#define pq priority_queue < pii, vector<pii>,greater<pii>>;
vector<vector<int>> graph;
int u,v;

int main()
{
int n,m;
cin >> n >> m;

graph.resize(n);

for (int i = 0; i < m;i++)
{
    cin >> u >> v;
    u--; v--;
    graph[u].pushback(v);
    graph[v].pushback(u);
}

ll dist[n];
for(int i = 0; i < n; i++) dist[i] = LLONG_MAX;

int u = 0;
dist[u] = 0;

pq q;
q.push({0,u});

while(!empty(q))
{
    pii p = q.top();
    q.pop();
    int u = p.second;
    if (p.first > dist[u]) continue; // si pasa esto 
}