#include <iostream>

bool BrickAndWindow(double a, double b, double c, double x, double y) {
    bool ab = (a <= x && b <= y) || (a <= y && b <= x);
    bool ac = (a <= x && c <= y) || (a <= y && c <= x);    
    bool bc = (b <= x && c <= y) || (b <= y && c <= x);
    return ab || ac || bc;
}