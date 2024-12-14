Given two sequences `A = a₁, a₂, ..., aₘ` and `B = b₁, b₂, ..., bₙ`, the **maximum common subsequence** `C = c₁, c₂, ..., cₖ` is the longest subsequence (not necessarily contiguous) that appears in both `A` and `B`.

### Example
For example, if:
- `A = [d, y, n, a, m, i, c]`
- `B = [p, r, o, g, r, a, m, m, i, n, g]`

The longest common subsequence is: `[a, m, i]`

---

### Tasks

1. **Length of Longest Common Subsequence**
   - Implement a dynamic programming algorithm to compute the length of the maximum common subsequence of two strings.
   - Your implementation should be completed via the following C++ function:  
     ```cpp
     int findMaxSubSeqLen(string stringA, string stringB);
     ```

2. **Longest Common Subsequence**
   - Utilize your dynamic programming algorithm from part (1) to find the actual maximum common subsequence of two strings.
   - Your implementation should be completed via the following C++ function:  
     ```cpp
     string findMaxSubSeq(string stringA, string stringB);
     ```

---

### Provided Files
- **`main.cpp`**: A file that serves as a guide for testing. Your code will be tested with a similar main function. 
- **`LongestCommonSubsequence.h`**: A header file containing the function declarations.
