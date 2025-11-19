#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

void push(Node*& head, int value) {
  Node* new_node = new Node{value, head};
  head = new_node;
}

void printList(Node* head) {
  Node* current = head;
  while (current != nullptr) {
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << "nullptr" << endl;
}

void deleteList(Node*& head) {
  while (head != nullptr) {
    Node* temp = head;
    head = head->next;
    delete temp;
  }
}

int main() {
  Node* head = nullptr;

  push(head, 10);
  push(head, 20);
  push(head, 30);

  printList(head);

  deleteList(head);
  return 0;
}
