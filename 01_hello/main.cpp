#include <iostream>


int main() { 
    std::cout << "Hello, World\n"; 
    return 0;

}

// g++ -E main.cpp > main.i
// g++ -S main.i
// g++ -c main.s
// g++ main.o -o main