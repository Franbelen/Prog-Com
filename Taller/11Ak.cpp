#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;

int V,E;
int w,v,u;

// codigo competitive programming 4

class UnionFind { // OOP style
    private: vi p, rank, setSize; // vi p is the key part
    int numSets;
    public:
        UnionFind(int N) {
            p.assign(N, 0); for (int i = 0; i < N; ++i) p[i] = i;
            rank.assign(N, 0); // optional speedup
            setSize.assign(N, 1); // optional feature
            numSets = N; // optional feature
        }
        int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
        bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
        int numDisjointSets() { return numSets; } // optional
        int sizeOfSet(int i) { return setSize[findSet(i)]; } // optional
        void unionSet(int i, int j) {
            if (isSameSet(i, j)) return; // i and j are in same set
            int x = findSet(i), y = findSet(j); // find both rep items
            if (rank[x] > rank[y]) swap(x, y); // keep x ’shorter’ than y
            p[x] = y; // set x under y
            if (rank[x] == rank[y]) ++rank[y]; // optional speedup
            setSize[y] += setSize[x]; // combine set sizes at y
            --numSets; // a union reduces numSets
            }
        };

//

int main()
{
    cin >> V >> E;
    //cerr << "hola \n" ;
    set<int> Encontrados;
    vector< pair<int, ii> > Edgelist;
    w = 1;
    for(int i = 0; i< E; i++)
    {
        cin >> u >> v;
        Edgelist.push_back(make_pair(w,ii(u-1,v-1)));
        Encontrados.insert(u-1);
        Encontrados.insert(v-1);
    }
sort(Edgelist.begin(),Edgelist.end()); // sort de built in de pair 

int mst_cost = 0, num_taken = 0; // no edge has been taken
UnionFind UF(V); // all V are disjoint sets

for (auto &[w, e] : Edgelist) 
{ 
    u = e.first; v = e.second;
    
    if (UF.isSameSet(u, v)) continue; // already in the same CC

    UF.unionSet(u, v); // link them
    ++num_taken; // 1 more edge is taken
    if (num_taken == V-1) break;
    
}
int i;
// agregar caminos
vector< pair<int, ii> > Edgelist2;
vector<ii> Escogidos;
while(!Encontrados.empty())
{
    i = *Encontrados.begin();
    Encontrados.erase(i);
    for (int j =0;j< V;j++)
    {
        if (UF.isSameSet(i, j)) continue;

        mst_cost += w;
        UF.unionSet(i, j); // link them
        Escogidos.push_back(ii(i,j));
        
    }
}

cout << mst_cost << '\n';

for (const auto& pair : Escogidos) 
    {
        cout << pair.first +1 << " " << pair.second +1 << "\n";
    }

}