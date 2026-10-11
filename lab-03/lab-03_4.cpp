#include <iostream>
#include <format>

using namespace std;

int main() {    
    double x;
    cin >> x;
    cout << format("{:.5f}", x) << endl;       
    cout << format("{:.2e}", x) << endl;
    cout << format("{:+.5e}", x) << endl; 
    cout << format("{:+012.2f}", x) << endl;                          
}