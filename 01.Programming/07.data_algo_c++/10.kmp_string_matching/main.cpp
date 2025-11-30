#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> buildLPS(const string& pattern) {
  int n = pattern.size();
  vector<int> lps(n, 0);
  int len = 0;
  int i = 1;

  while(i < n) {
    if (pattern[i] == pattern[len]) {
      len++;
      lps[i] = len;
      i++;
    } else {
      if (len != 0) {
        len = lps[len - 1];
      } else {
        lps[i] = 0;
        i++;
      }
    }
  }
  return lps;
}

vector<int> kmpSearch(const string& text, const string& pattern) {
  vector<int> lps = buildLPS(pattern);
  vector<int> result;
  int i = 0;
  int j = 0;

  while (i < text.size()) {
    if (text[i] == pattern[j]) {
      i++;
      j++;
    }

    if (j == pattern.size()) {
      result.push_back(i - j);
      j = lps[j - 1];
    } else if (i < text.size() && text[i] != pattern[j]) {
      if (j != 0) {
        j = lps[j - 1];
      } else {
        i++;
      }
    }
  }
  return result;
}

int main() {
  string text = "ababcabcabababd";
  string pattern = "ababd";
  vector<int> matches = kmpSearch(text, pattern);

  for (int pos : matches) {
    cout << "Pattern found at index: " << pos << endl;
  }
  
  return 0;
}
