#include <iostream>
#include <print>
using namespace std;
int main() {    
    double a,b,c;
    a=1;
    b=2;
    c=3;
    swap(a,c);
    swap(c,b);
    swap(b,a);
    println("a = {}, b = {}, c = {}", a, b, c); 
}       