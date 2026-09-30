#include <iostream>
#include <format>
#include <cmath>
using namespace std;

int main() {

    double a = pow(10.001 / 9.0, 345.0);
    double b = pow(13.001 / 11.001, 249.0);
    double c = pow(9.0, 10.0) * pow(11.001, 20.0);
    
    double result = (a * b) / c;
    cout << result << endl;
    return 0;
}

    
