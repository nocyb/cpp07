#include "Array.hpp"

int main() {
    try {
        std::cout << "--- Subject Tip Test ---" << std::endl;
        int * a = new int();
        std::cout << "Value of new int(): " << *a << " (should be 0)" << std::endl;
        delete a;

        Array<int> testTip(1);
        std::cout << "Value of Array<int>(1)[0]: " << testTip[0] << " (should be 0)" << std::endl;
        std::cout << "\n" << std::endl;

        std::cout << "--- Deep Copy test (Constructor) ---" << std::endl;
        Array<int> original(3);
        original[0] = 42;
        
        Array<int> copy = original;
        copy[0] = 100;

        std::cout << "Original[0]: " << original[0] << " (should be 42)" << std::endl;
        std::cout << "Copy[0]: " << copy[0] << " (should be 100)" << std::endl;
        std::cout << "\n" << std::endl;

        std::cout << "--- Assignment Operator test ---" << std::endl;
        Array<std::string> strings(2);
        strings[0] = "Hello";
        Array<std::string> otherStrings;
        otherStrings = strings;
        otherStrings[0] = "World";

        std::cout << "strings[0]: " << strings[0] << std::endl;
        std::cout << "otherStrings[0]: " << otherStrings[0] << std::endl;
        std::cout << "\n" << std::endl;


        std::cout << "--- Exception test (Out of bounds) ---" << std::endl;
        std::cout << "Accessing index 10 on array of size 3..." << std::endl;
        std::cout << original[10] << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}