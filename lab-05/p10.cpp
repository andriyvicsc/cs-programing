#include <iostream>
#include <format>
#include <cmath>
using namespace std;

void inputA(double &x1, double &y1) {
    cout << "Введіть значення x1: ";
    cin >> x1;
    cout << "Введіть значення y1: ";
    cin >> y1;
}
void inputB(double &x2, double &y2) {
    cout << "Введіть значення x2: ";
    cin >> x2;
    cout << "Введіть значення y2: ";
    cin >> y2;
}
double d_AB(double x1, double y1, double x2, double y2) {
    cout << "Відстань між точками A і B: ";
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
double mid_AB(double x1, double y1, double x2, double y2, double &mid_x, double &mid_y) {
    cout << "Середина відрізка AB: ";
    mid_x = (x1 + x2) / 2;
    mid_y = (y1 + y2) / 2;
}

int main() {
   double x1, y1, x2, y2, mid_x, mid_y;
   inputA(x1, y1);
   inputB(x2, y2); 
   cout << d_AB(x1, y1, x2, y2) << endl;
   mid_AB(x1, y1, x2, y2, mid_x, mid_y);
   cout << format("({}, {})\n", mid_x, mid_y);
   return 0;
}