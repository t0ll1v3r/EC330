### For Readers

`Problem5.cpp` is the program I created. To run the program, save the files to your device. Open a terminal in the folder where you saved the files, and run the following command to compile the program (Note that "mazeSolver" is the name of the executable file, feel free to choose any name): `g++ -o mazeSolver MazeShortestPath.cpp` Then, execute the program with the following command, passing the maze input file as an argument: `./mazeSolver GivenFiles/maze.txt` This will run the program using maze.txt as the input file. Make sure maze.txt is in the same directory as the compiled program or provide the correct file path.

The assignment description is as follows...

---

### Overview

Consider a 2D array of 1s and 0s of size NxN. The array represents a "maze." You must start from the top left (index (0,0)) and find the length of the shortest path to the bottom right (index (N-1, N-1)). You may only travel across elements that have a value of "1." The top left and bottom right indices are guaranteed to be "1." You may only move horizontally or vertically one index with each step.

### Tasks

For example, given the following input maze, the shortest path is along the bolded numbers and has a length of 9 (where the length is defined as the number of "1" squares in the shortest path):

**1 1** 0 0 1<br>
0 **1** 0 1 1<br>
0 **1** 1 0 0<br>
1 **1 1 1** 0<br>
1 1 0 **1 1**<br>

You are provided with an input file called `maze.txt` containing a maze. Your program should:
- Accept the file name as a command-line argument.
- Read the maze from the file and determine N, the dimension of the maze.
- Output the length of the shortest path to the screen.
- If no path exists, output 0.
