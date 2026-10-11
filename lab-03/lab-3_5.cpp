#include <iostream>
#include <format>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    cout << format("({:.3f}, {:.3f})", x,y) << endl; 

}