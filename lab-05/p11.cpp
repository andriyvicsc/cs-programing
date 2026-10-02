#define _USE_MATH_DEFINES
#include <iostream>
#include <format>
#include <cmath>
using namespace std;

void InputLenRing(double &len) {
    cout << "Введіть довжину кола: ";
    cin >> len;
}
double CalcRad(double len, double &r) {
    cout << "Радіус кола: ";
    r = len / (2 * M_PI);
    return r;
}
double CalcSqr(double r, double &s) {
    cout << "Площа кола: ";
    s = M_PI * pow(r, 2);
    return s;
}
int main() {
    double len, r, s;
    InputLenRing(len);
    CalcRad(len, r);
    cout << format("{:.4f}", r) << endl;
    CalcSqr(r, s);
    cout << format("{:.4f}", s) << endl;
    return 0;
}
    