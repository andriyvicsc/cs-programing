#define _USE_MATH_DEFINES
#include <iostream>
#include <format>
#include <cmath>
using namespace std;

int main(){
    double x;
    cin >> x;
    double res = M_PI/2 - atan(x);

    cout << format("{:.4f}", res)<< endl;
    return 0;
}