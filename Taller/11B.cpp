#include <bits/stdc++.h>
using namespace std;

int u,v;


int main() {
    int v,e;
    int n, m, c, h;
    cin >> v >> e;

    vector<int> g[v];
    int distancia[v];
    int parent[v];
    memset(distancia, 0 ,sizeof distancia);
    memset(parent, -1 ,sizeof parent);


    // Read the edges of the graph
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);

    }

    // bfs de 0 a n-1
    queue<int> q;
        q.push(0);

        while (!q.empty()) 
        {
            int node = q.front();
            q.pop();

            for (int neighbor : g[node]) 
            {
                if (distancia[neighbor] == 0 and neighbor != node) {
                    distancia[neighbor] = distancia[node]+1;
                    parent[neighbor]= node;
                    q.push(neighbor);
                }
            }
    }
if(parent[v-1]== -1){cout << "IMPOSSIBLE"<<"\n";}
else
{
int d = distancia[v-1];
int goal = v-1;

stack<int> camino;
camino.push(goal+1);
for(int i = 0;i<d;i++){camino.push(parent[goal] +1); goal = parent[goal];}
cout << d+1<< "\n";
while(!camino.empty()){d = camino.top(); cout << d << " "; camino.pop();}
}

}