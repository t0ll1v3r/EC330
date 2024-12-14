### For Readers

`SubstringAnalyzer.cpp` is the program I created. To run the program, save the file to your device. Open a terminal in the folder where you saved the file, and run the following command to compile the program (Note that "analyzeProgram" is the name of the executable file, feel free to choose any name): `g++ -o analyzeProgram SubstringAnalyzer.cpp`. Then, execute the program with the following command, passing a string and a size as command-line arguments: `./analyzeProgram "your_string_here" size`

For example, to analyze the string "aaaargh" with a size of 1, run:
`./analyzeProgram "aaaargh" 1`

---

### Overview

The function receives as input a string str and an integer size where 0 < size < 10. The function returns the most frequently occurring sequence of "size" characters in str, with ties broken in favor of the first occurring sequence in the string. If str has fewer than size characters, it returns the input str.

### Tasks

Your main function should:
- Receive a string and an integer from the command line.
- Call the Analyze function with the two inputs.
- Print the output returned by Analyze.

---

#### Example Usage

Suppose you compile your program to an executable named analyzeProgram. Here are a few example input/output sequences:

Input: `./analyzeProgram "aaaargh" 1`<br>
Output: `a`<br>
<br>
Input: `./analyzeProgram "cadabra abra" 2`<br>
Output: `ab`<br>
<br>
Input: `./analyzeProgram "I like apples. I like oranges." 6`<br>
Output: `I like`<br>
<br>
Input: `./analyzeProgram "hi" 3`<br>
Output: `hi`<br>
*(since "hi" has fewer than 3 characters, the entire string is returned)*
