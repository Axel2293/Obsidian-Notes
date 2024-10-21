# Number theory
`Cap 21 of Laaksonen`

# Basic combinatory
# Full search and Backtracking
# Divide and conquer
## Binary search
## Ternary search
# Dinamic Programming
# Two Pointers
# Sliding Window
# Strings (Arrays of characters)
# Graphs
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

# Graphs
## Types of edges
- **Tree Edge**: It is an edge which is present in the tree obtained after applying DFS on the graph. All the Green edges are tree edges. 
- **Forward Edge**: It is an edge (u, v) such that v is a descendant but not part of the DFS tree. An edge from **1 to 8** is a forward edge. 
- **Back edge**: It is an edge (u, v) such that v is the ancestor of node u but is not part of the DFS tree. Edge from **6 to 2** is a back edge. The presence of back edge indicates a cycle in directed graph](https://www.geeksforgeeks.org/detect-cycle-in-a-graph/). 
- **Cross Edge**: It is an edge that connects two nodes such that they do not have any ancestor and a descendant relationship between them. The edge from node **5 to 4** is a cross edge.
## DFS

## BFS

## Tarjan

## Hamiltonian Graph
## Eulerian Graph