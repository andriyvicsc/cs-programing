#include <iostream>
#include <format>

using namespace std;

int main() {
    int hh, mm;
    cin >> hh >> mm;
    cout << format("{:02}:{:02}", hh, mm) << endl; 
}