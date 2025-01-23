#include <iostream>
#include "Array.hpp"

int main() {
    try {
        // Test 1: Default constructor
        Array<int> emptyArray;
        std::cout << "Test 1: Default Constructor" << std::endl;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;
        std::cout << "-----------------------" << std::endl;

        // Test 2: Parameterized constructor
        Array<int> intArray(5);
        std::cout << "Test 2: Parameterized Constructor" << std::endl;
        std::cout << "intArray size: " << intArray.size() << std::endl;
        std::cout << "intArray elements (default initialization): ";
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " "; 
        }
        std::cout << std::endl;
        std::cout << "-----------------------" << std::endl;

        // Test 3: Modify elements
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 2; // Modify values
        }
        std::cout << "Test 3: Modify Elements" << std::endl;
        std::cout << "intArray elements after modification: ";
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "-----------------------" << std::endl;

        // Test 4: Copy constructor
        Array<int> copiedArray = intArray;
        copiedArray[0] = 100;
        std::cout << "Test 4: Copy Constructor" << std::endl;
        std::cout << "Original intArray[0]: " << intArray[0] << std::endl; 
        std::cout << "Copied copiedArray[0]: " << copiedArray[0] << std::endl; 
        std::cout << "-----------------------" << std::endl;

        // Test 5: Assignment operator
        Array<int> assignedArray;
        assignedArray = intArray;
        assignedArray[1] = 200;
        std::cout << "Test 5: Assignment Operator" << std::endl;
        std::cout << "Original intArray[1]: " << intArray[1] << std::endl; 
        std::cout << "Assigned assignedArray[1]: " << assignedArray[1] << std::endl; 
        std::cout << "-----------------------" << std::endl;

        // Test 6: Access out of bounds
        std::cout << "Test 6: Access Out of Bounds" << std::endl;
        try {
            std::cout << intArray[10] << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
        std::cout << "-----------------------" << std::endl;

        // Test 7: Const array and const subscript operator
        const Array<int> constArray(3);
        std::cout << "Test 7: Const Array" << std::endl;
        std::cout << "constArray size: " << constArray.size() << std::endl;
        try {
            std::cout << "constArray[1]: " << constArray[1] << std::endl; 
        } catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
        std::cout << "-----------------------" << std::endl;

        // Test 8: Array of non-primitive types
        Array<std::string> stringArray(3);
        stringArray[0] = "Hello";
        stringArray[1] = "World";
        stringArray[2] = "!";
        std::cout << "Test 8: Non-Primitive Types" << std::endl;
        for (unsigned int i = 0; i < stringArray.size(); i++) {
            std::cout << "stringArray[" << i << "]: " << stringArray[i] << std::endl;
        }
        std::cout << "-----------------------" << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }

    return 0;
}
