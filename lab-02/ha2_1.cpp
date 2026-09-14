#include <iostream>
#include <format>
using namespace std;
int main() {
// system("chcp 65001");
cout << "Привіт від Андрій Іваненко" << endl;
cout << format("{0:.7f}", 1.23) << endl;
return 0;
}