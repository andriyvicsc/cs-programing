#include <iostream>
#include <format>

using namespace std;

int main() {
    double a, b, c ;
    cin >> a >> b >> c;
    cout << format("f(x) = {:.2f}*x^2 {:+.2f}*x {:+.2f}", a, b, c) << endl;  
}