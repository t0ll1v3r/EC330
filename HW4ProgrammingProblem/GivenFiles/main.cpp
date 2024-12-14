#include "FindMissingNumber.h"
#include <iostream>

int main(int argc, char* argv[]) {
    InputArray inp = InputArray();
    int result = FindMissingNumber(inp);
    cout << "The missing number from the example array is: " << result << ".\n";
    return result;
}
