#### For readers

`BST.cpp` is the program I created. To run the program, save the files to your device. Open a terminal in the folder where you saved the files, and run the command `g++ -o bstProgram GivenFiles/main.cpp BST.cpp` to compile (Note that "bstProgram" is the name of the executable file, feel free to choose any name). Then, enter `./bstProgram GivenFiles/bst.txt` to execute the program. The assignment description is as follows...

---
#### Overview

You are provided with the declaration of a Binary Search Tree (BST) in `BST.h`. It contains a `BSTNode` struct and a `BST` class. The binary search tree you will implement includes a method that detects whether it is balanced or not. A balanced tree is a tree where, for any given node, the heights of its left and right subtrees differ by at most one. This method could potentially be used to extend the tree to an AVL tree or a Red-Black tree, with methods to balance an unbalanced tree.

#### Tasks
Implement the `BST` class (in `BST.cpp`), which should contain the following methods and members:

- **`root`**: Pointer to the root of the binary search tree.
- **`CreateNode(int data)`**: Creates and returns a new node with the provided data value.
- **`Insert(BSTNode* node, int data)`**: Receives as input the root of a binary search tree or subtree, creates and inserts a new node with the given value `data`, by calling the `CreateNode` method. Returns a pointer to the root of the tree/subtree after the new node was inserted (which may consist of just the node itself).
- **`Search(BSTNode* node, int data)`**: Searches for the provided `data` in the subtrees of `node`. If `node` is the root of a tree, it will search the entire tree and return `true` if the key is found, `false` if not.
- **`CountNodes(BSTNode* root)`**: Returns the number of nodes in the tree/subtree with the provided root.
- **`CreateTree(string file)`**: Receives a text file containing one integer per line and inserts them into a binary search tree one at a time.
- **`isBalanced(BSTNode* node)`**: Returns `true` if the binary tree/subtree with the provided root is balanced. That is, for any given node in the tree, the difference in heights of its left and right subtrees differs by at most one. Otherwise, returns `false`.

---

##### Provided Files 

1. **`BST.h`**: Contains the `BSTNode` struct and the `BST` class declarations.
2. **`main.cpp`**: Constructs a binary search tree by inserting keys from an input file and calls the methods of the tree to test its functionality.
3. Input file **`bst.txt`**: A sample file containing integers (one per line).

Found inside the `GivenFiles` folder

---

##### Example Output

Given the provided `bst.txt` file, the program should produce the following output:<br>
`Node 5 is in the tree`<br>
`Node 8 is in the tree Node`<br>
`7 is not in the tree Node`<br>
`0 is not in the tree`<br>
`The tree contains 6 nodes`<br>
`The tree is balanced`
