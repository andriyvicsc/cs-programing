#include <iostream>
#include "p15.cpp"

int main() {
    double a, b, c;
    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    int numRoots = SolQuadEquation(a, b, c);
    std::cout << "Number of roots: " << numRoots << std::endl;
    return 0;
}