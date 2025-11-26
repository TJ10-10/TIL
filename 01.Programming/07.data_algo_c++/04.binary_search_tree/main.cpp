#include <iostream>

struct Node {
  int value;
  Node* left;
  Node* right;

  Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

class BST {
  public:
    void insert(int value) {
      root = insertRec(root, value);
    }

    void inorder() {
      inorderRec(root);
      std::cout << std::endl;
    }

private:
    Node* root = nullptr;

    Node* insertRec(Node* node, int value) {
      if (!node) return new Node(value);
      if (value < node->value)
        node->left = insertRec(node->left, value);
      else
        node->right = insertRec(node->right, value);
      return node;
    }

    void inorderRec(Node* node) {
      if (!node) return;
      inorderRec(node->left);
      std::cout << node->value << " ";
      inorderRec(node->right);
    }
};

int main() {
  BST tree;
  tree.insert(7);
  tree.insert(3);
  tree.insert(9);
  tree.insert(1);
  tree.insert(5);

  std::cout << "Inorder traversal: ";
  tree.inorder();
}
