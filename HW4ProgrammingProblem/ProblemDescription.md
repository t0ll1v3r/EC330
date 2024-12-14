### For Readers

`FindMissingNumber.cpp` is the program I created. To run the program, save the provided files (`InputArray.cpp`, `InputArray.h`, `FindMissingNumber.cpp`, `FindMissingNumber.h`, and `main.cpp`) to your device. Open a terminal in the folder where you saved the files, and run the following command to compile the program (Note that "findMissingNumber" is the name of the executable file, feel free to choose any name): `g++ -o findMissingNumber GivenFiles/main.cpp FindMissingNumber.cpp GivenFiles/InputArray.cpp` Then, execute the program with the following command: `./findMissingNumber` This will run the program and print the missing number from the array stored in the InputArray class.

### Overview

You are given an array containing all but one of the integers between 0 and n (inclusive). For example, if n = 4, then the array could be [0, 2, 1, 4]. The array is a private member of the InputArray class, and your only access to the array is via the public member function findBit. This function accepts two non-negative integers and returns true if the j-th bit of A[i] (represented in binary) is 1, and false otherwise.

### Tasks

Your task is to implement an algorithm in FindMissingNumber.cpp that utilizes the InputArray class and its public members and methods to find and print the missing number from the array.

Provided Files:
- InputArray.h: Contains the declaration of the InputArray class.
- InputArray.cpp: Implements the InputArray class and its methods.
- FindMissingNumber.h: Contains the function declaration for Problem5.
- main.cpp: A driver program that constructs the InputArray and prints the missing number.

Your algorithm must:
- Have a worst-case runtime of at least Θ(n log n).
- For full credit, achieve a runtime of Θ(n).<br>
*Hint: The number of bits required to represent n is ⌈lg(n + 1)⌉. Since n = 2<sup>k - 1</sup> for some integer k, the number of bits of n is k.*

#### Example

Using the earlier example, suppose the array is [0, 2, 1, 4] and n = 4. The program output would be:

The missing number from the example array is: 3.
