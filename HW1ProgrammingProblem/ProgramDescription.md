### For Readers

`MergeSortedFiles.cpp` is the program I created. To run the program, save the file to your device along with two input files (e.g., `words1.txt` and `words2.txt`). Open a terminal in the folder where you saved the files and run the following command to compile the program (Note that "mergeProgram" is the name of the executable file, feel free to choose any name): `g++ -o mergeProgram MergeSortedFiles.cpp`. Then, execute the program with the following command, passing the two input files as arguments: `./mergeProgram Inputs/words1.txt Inputs/words2.txt` This will run the program and create an output file named output.txt, which will contain the merged and alphabetically sorted content of the two input files. Ensure that the input files (words1.txt and words2.txt) contain one word per line in alphabetical order before running the program.

---

### Overview

The function receives as input two file names of files containing words, one word per line, in alphabetical order (you may assume only lower-case letters). The function creates an output file, output.txt, which contains the merged content of the two input files, one word per line, in alphabetical order.

Your main function should:
-Receive two file names from the command line.
-Call the MergeFiles function with these file names.
-Exit after creating the output file.

#### Example Usage
Suppose you compile your program to an executable named mergeProgram and you have two input files named words1.txt and words2.txt. The program should be run as follows:
`./mergeProgram Inputs/words1.txt Inputs/words2.txt`


If `words1.txt` contains:
```
alphabetical  
file  
input  
names
```
And `words2.txt` contains:
```
containing  
function  
of  
words
```
The program will create an output file output.txt with the following content:
```
alphabetical  
containing  
file  
function  
input  
names  
of  
words
```
