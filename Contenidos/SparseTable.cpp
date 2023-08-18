#include <bits/stdc++.h>

//#define int long long

using namespace std;
int j,m;
// Precomputación en O(n logn), query en O(1)
template <typename T>
struct SparseTable {
  int n;
  vector<vector<T>> table;
  function<T(T, T)> merge;
  SparseTable(const vector<T> &arr, function<T(T, T)> m) : merge(m) {
    n = arr.size();
    int k = log2_floor(n) + 1;
    table.assign(n, vector<T>(k));
    for (int i = 0; i < n; i++)
      table[i][0] = arr[i];
    for (int j = 1; j < k; j++)
      for (int i = 0; i + (1 << j) <= n; i++)
        table[i][j] = merge(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
  }
  T query(int l, int r) {
    int k = log2_floor(r - l + 1);
    return merge(table[l][k], table[r - (1 << k) + 1][k]);
  }
  int log2_floor(int n) { return n ? __builtin_clzll(1) - __builtin_clzll(n) : -1; }
};

int mergea(int a, int b) {
    return min(a, b);
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    SparseTable<int> ST(arr,mergea);

    for(int i = 0; i < n; i++)
    {
        m = 0;
        j = 0;
        while (j < n-i)
        {
            m = max(m, ST.query(j,j+i));
            j+=i+1;
        }
        cout << m << " ";
    }
    cout << "\n";

    return 0;
}