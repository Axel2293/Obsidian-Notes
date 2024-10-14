## Binary search
Consist in dividing the array by half to find the required element. The array to search into has to be:
- Sorted: this makes able the divide and conquer strategy.
- Access to any element of the array takes constant time
This algorithm has a complexity of *O(log N)*

### Steps
1. Find the middle index: *mid = low + (high - low) / 2 *![[mid-in-binary-search.webp]]
2. Compare if target is the middle element, if not go to step three
3. Decide which half to discard, if the target is **lower than middle** then we will use *left half* or if it is **grater than the middle** then we will use the *right half*.
4. With the half we got we will repeat the step **1, 2 and 3** *till we find the target* or the *search space reaches an end* (Target not found).

## Interpolation search