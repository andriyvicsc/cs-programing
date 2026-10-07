#include <iostream>

int SolQuadEquation(double a, double b, double c) {
    if (a == 0 && b == 0) {
        return (c == 0) ? -1 : 0;
    }
    double discriminant = b * b - 4 * a * c;

    if (a == 0 || discriminant == 0) {
        return 1;
    }
    return (discriminant > 0) ? 2 : 0;
}