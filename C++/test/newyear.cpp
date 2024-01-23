#include <iostream>

int main() {
    std::cout << "TO PENUP :MESSAGE :SIZE\n";
    std::cout << "RT 90\n";
    std::cout << "REPEAT 2 [FD :SIZE RT 90]\n";
    std::cout << "FD :SIZE\n";
    std::cout << "LT 90\n";
    std::cout << "PU\n";
    std::cout << "FD :SIZE/2\n";
    std::cout << "LT 90\n";
    std::cout << "FD :SIZE/2\n";
    std::cout << "PD\n";
    std::cout << "PRINT :MESSAGE\n";
    std::cout << "PU\n";
    std::cout << "BK :SIZE/2\n";
    std::cout << "LT 90\n";
    std::cout << "FD :SIZE/2\n";
    std::cout << "RT 90\n";
    std::cout << "PD\n";
    std::cout << "PRINT :MESSAGE\n";
    std::cout << "PU\n";
    std::cout << "FD :SIZE/2\n";
    std::cout << "LT 90\n";
    std::cout << "FD :SIZE\n";
    std::cout << "RT 90\n";
    std::cout << "PD\n";
    std::cout << "PRINT :MESSAGE\n";

    return 0;
}
