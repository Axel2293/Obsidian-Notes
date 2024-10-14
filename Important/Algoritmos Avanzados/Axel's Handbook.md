# Trie Data Structure (Prefix tree)
[![Trie Data Structure | Insert and Search - GeeksforGeeks](https://media.geeksforgeeks.org/wp-content/uploads/20220828232752/Triedatastructure1.png)
```python
class TrieNode:
    def __init__(self):
        self.child = [None] * 26  # Child nodes
        self.wrd = False  # If the node represents a word

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word: str) -> None:
        curr = self.root
        for char in word:
            idx = ord(char) - ord("a")
            if curr.child[idx] == None:  # If not on the list, add it
                curr.child[idx] = TrieNode()
            curr = curr.child[idx]  # Change the curr node
        curr.wrd = True

    def search(self, word: str) -> bool:
        curr = self.root
        for char in word:
            idx = ord(char) - ord("a")
            if curr.child[idx] == None:
                return False
            curr = curr.child[idx]
        if curr.wrd:
            return True

    def startsWith(self, prefix: str) -> bool:
        curr = self.root
        for char in prefix:
            idx = ord(char) - ord("a")
            if curr.child[idx] == None:
                return False
            curr = curr.child[idx]
        return True
```

