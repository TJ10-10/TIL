#include <iostream>
#include <vector>
#include <map>

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  numbers.push_back(6);

  std::cout << "Vectorの中身: ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::map<std::string, int> scores;
  scores["Alice"] = 90;
  scores["Bob"] = 85;

  std::cout << "Bobのスコア: " << scores["Bob"] << std::endl;

  for (const auto& pair : scores) {
    std::cout << pair.first << " のスコアは " << pair.second << std::endl;
  }

  return 0;
}
