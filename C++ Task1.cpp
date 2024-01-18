#include <iostream>

int main() {
    std::cout << "\033[1;31m"; 
    std::cout << "\033[1m";
    std::cout << "\n\t\t\t\t  \"Мы все плывём по водам бурного потока,\n";
    std::cout << "\t\t\t\t   именуемого судьбой.\n";
    std::cout << "\t\t\t\t   Но потом наше время истекает,\n";
    std::cout << "\t\t\t\t   и река жизни пересыхает,\n";
    std::cout << "\t\t\t\t   прежде чем мы успеваем понять, кто мы.\"\n";
    std::cout << "\033[0m"; 
    return 0;