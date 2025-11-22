#include <iostream>
#include <vector>

using namespace std;

class SegmentTree {
  vector<int> tree;
  int n;

public:
  SegmentTree(const vector<int>& data) {
    n = data.size();
    tree.resize(2 * n);
    for (int i = 0; i < n; ++i)
      tree[n + i] = data[i];
    for (int i = n - 1; i > 0; --i)
      tree[i] = tree[i << 1] + tree[i << 1 | 1];
  }

  int query(int l, int r) {
    int res = 0;
    for (l += n, r += n; l < r; l >>=1, r >>= 1) {
      if (l & 1) res += tree[l++];
      if (r & 1) res += tree[--r];
    }
    return res;
  }

  void update(int pos, int value) {
    for (tree[pos += n] = value; pos > 1; pos >>= 1)
      tree[pos >> 1] = tree[pos] + tree[pos ^ 1];
  }
};

int main() {
  vector<int> data = {1, 3, 5, 7, 9, 11};
  SegmentTree st(data);
  cout << "Sum [1, 4): " << st.query(1, 4) << endl;
  st.update(2, 6);
  cout << "After update, Sum [1, 4): " << st.query(1, 4) << endl;
}
