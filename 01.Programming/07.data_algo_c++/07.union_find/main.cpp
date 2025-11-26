#include <iostream>
#include <vector>

class UnionFind {
private:
  std::vector<int> parent, rank;

public:
  UnionFind(int n) : parent(n), rank(n, 0) {
    for(int i = 0; i < n; ++i) parent[i] = i;
  }

  int find(int x) {
    if (parent[x] != x)
      parent[x] = find(parent[x]);
    return parent[x];
  }

  void unite(int x, int y) {
    int rx = find(x), ry = find(y);
    if (rx == ry) return;

    if (rank[rx] < rank[ry]) {
      parent[rx] = ry;
    } else {
      parent[ry] = rx;
      if (rank[rx] == rank[ry]) rank[rx]++;
    }
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }
};

int main() {
  UnionFind uf(6);

  uf.unite(0, 1);
  uf.unite(1, 2);
  uf.unite(3, 4);

  std::cout << std::boolalpha;
  std::cout << "0と2は同じ集合か? " << uf.same(0, 2) << "\n";
  std::cout << "0と4は同じ集合か? " << uf.same(0, 4) << "\n";

  uf.same(2, 4);
  std::cout << "0と4は同じ集合か? " << uf.same(0, 4) << "\n";

  return 0;
}
