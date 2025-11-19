#include <iostream>
#include <stack>
#include <queue>

int main() {
  std::stack<std::string> mushroom_stack;
  mushroom_stack.push("ナメコ");
  mushroom_stack.push("シイタケ");
  mushroom_stack.push("マツタケ");

  std::cout << "Stack:" << std::endl;
  while (!mushroom_stack.empty()) {
    std::cout << " " << mushroom_stack.top() << std::endl;
    mushroom_stack.pop();
  }

  std::queue<std::string> mushroom_queue;
  mushroom_queue.push("ナメコ");
  mushroom_queue.push("シイタケ");
  mushroom_queue.push("マツタケ");

  std::cout << "\n Queue:" << std::endl;
  while (!mushroom_queue.empty()) {
    std::cout << " " << mushroom_queue.front() << std::endl;
    mushroom_queue.pop();
  }
  
  return 0;
}
