#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double db;
typedef pair<int,int> pii;

struct Trie{
    static const int MAX = 1e6;
    int N[MAX][26] = {0}, S[MAX] = {0}, c = 0;
    void add(string s, int a = 1){
        int p = 0; S[p] += a;
        for (char l : s){
            int t = l - 'a';
            if (!N[p][t]) N[p][t] = ++c;
            S[p = N[p][t]] += a;
        }
    }
};

struct Trie {
    vector<vector<int>> g;
    vector<int> count;
    int vocab;
    Trie(int vocab, int maxdepth = 10000) : vocab(vocab) {
        g.reserve(maxdepth);
        g.emplace_back(vocab, -1);
        count.reserve(maxdepth);
        count.push_back(0);
    }
    int move_to(int u, int c) {
        assert (0 <= c and c < vocab);
        int& v = g[u][c];
        if (v == -1) {
            v = g.size();
            g.emplace_back(vocab, -1);
            count.push_back(0);
        }
        count[v]++;
        return v;
    }
    void insert(const string& s, char ref = 'a') {  // insert string
        int u = 0; for (char c : s) u = move_to(u, c - ref);
    }    
    void insert(vector<int>& s) { // insert vector<int>
        int u = 0; for (int c : s) u = move_to(u, c);
    }
    db query(const string& s, char ref = 'a'){
      int u = 0; 
      db cost = 0;
      for (char c : s){
        ll co = 0;
        for(auto it : g[u]) if(it != -1)co++;
        
        ll nex = move_to(u, c - ref);
        if(u == 0 || co > 1 || count[u] != count[nex]) cost++;
        u = nex;
      }
      return cost;
    }
    ll dfs(int u, int depht){
        ll ans = INF;
        if(count1[u] == 1 && count2[u] == 1)ans = depht;
        for(int i = 0; i < 26; i++){
            if(g[u][i] != -1) ans = min(ans, dfs(g[u][i], depht + 1));
        }
        return ans;
    }
    int size() { return g.size(); }
};


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    // trie for each test case
    while(n--){
      string s;
      vector<string > c;
      Trie trie(26);
      for(int i = 0; i < n; i++){
        cin >> s;
        c.push_back(s);
        trie.insert(s);
      }
      db sum = 0;
      for(int i = 0; i < n; i++){
        sum += trie.query(c[i]);
      }
      cout<<fixed<<setprecision(2)<< sum / db(n) << "\n";
    }
}