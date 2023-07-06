#include <bits/stdc++.h>

using namespace std;

int u,v;


int main() {
    int n, m, c, h;
    cin >> n >> m;

    vector<int> g[n];
    int visited[n];
    memset(visited, 0,sizeof visited);

    // Read the edges of the graph
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);

    }

    // buscar componentes conexas
    queue<int> q;
    set<int> representantes;
    for(int i = 0;i< n;i++)
    {
        if (visited[i] == 0) // no esta visitado
        {
        representantes.insert(i);
        q.push(i);

        while (!q.empty()) 
        {
            int node = q.front();
            q.pop();

            for (int neighbor : g[node]) 
            {
                if (!visited[neighbor]) {
                    visited[neighbor] = 1;
                    q.push(neighbor);
                }
            }
        }
        }
    }
cout << representantes.size()-1 <<"\n";
int a = *representantes.begin();
for (auto x: representantes) if (x != a){ cout << x+1 << " " << a+1 << "\n";}
}