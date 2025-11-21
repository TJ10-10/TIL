// 09.trie/trie.cpp
#include <iostream>
#include <unordered_map>
using namespace std;

class TrieNode {
public:
    bool isEnd = false;
    unordered_map<char, TrieNode*> children;
};

class Trie {
    TrieNode* root;

public:
    Trie() { root = new TrieNode(); }

    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children[c])
                node->children[c] = new TrieNode();
            node = node->children[c];
        }
        node->isEnd = true;
    }

    bool search(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children[c]) return false;
            node = node->children[c];
        }
        return node->isEnd;
    }
};

int main() {
    Trie trie;
    trie.insert("nameko");
    trie.insert("shiitake");
    cout << boolalpha << trie.search("nameko") << endl;   // true
    cout << boolalpha << trie.search("maitake") << endl;  // false
}

