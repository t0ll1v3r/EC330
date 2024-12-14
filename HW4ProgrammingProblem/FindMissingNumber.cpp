/*
This algorithm finds the missing number in an array with numbers 0 to n with one missing.
The algorithm works by analyzing each bit of the numbers in the array and comparing it with the expected number of 1's at each bit position.
The missing number is reconstructed by checking discrepancies bit by bit. Overall runtime is Θ(nlog(n)) since each number is checked bit by bit.
*/

#include "GivenFiles/InputArray.h"
#include <iostream>

int FindMissingNumber(InputArray& arr) {
    int n = arr.n;
    int missing = 0;
    int numBits = 0;
    
    // determine number of bits required to represent n
    while ((1 << numBits) <= n) {
        numBits++;
    }

    // process each bits position
    for (int bit = 0; bit < numBits; bit++) {
        int expectedCount = 0;
        int actualCount = 0;

        // expected count of 1's at the current bit position if no number is missing
        for (int i = 0; i <= n; i++) {
            if (i & (1 << bit)) {
                expectedCount++;
            }
        }

        // actual count of 1's at the current bit position in the array
        for (int i = 0; i < n; i++) {
            if (arr.findBit(i, bit)) {
                actualCount++;
            }
        }

        // if the counts don't match, the missing number has a 1 in this bit position
        if (actualCount != expectedCount) {
            missing |= (1 << bit);
        }
    }

    return missing;
}
