#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *left;
  struct Node *right;
} Node;

Node* createNode(int value) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = value;
  newNode->left = newNode->right = NULL;
  return newNode;
}

Node* insert(Node* root, int value) {
  if (root == NULL) return createNode(value);

  if (value < root->data) {
    root->left = insert(root->left, value);
  } else if (value > root->data) {
    root->right = insert(root->right, value);
  }
  return root;
}

void inorder(Node* root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
  }
}

void freeTree(Node* root) {
  if (root == NULL) return;
  freeTree(root->left);
  freeTree(root->right);
  free(root);
}

int main(void) {
  Node* root = NULL;
  int data[] = {50, 30, 70, 20, 40, 60, 80};
  int n = sizeof(data) / sizeof(data[0]);

  for (int i = 0; i < n; i++) {
    root = insert(root, i == 0 ? (root = insert(NULL, data[i]), root) : root, data[i]);
    
    if (i == 0) root = insert(NULL, data[i]);
    else insert(root, data[i]);
  }

  printf("二分探索木の中順走査 (ソート済み結果) : ");
  inorder(root);
  printf("\n");

  freeTree(root);
  return 0;
}
